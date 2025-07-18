#include <iostream>
using namespace std;

class Node{

  public:
  int data,height;
  Node *left,*right;

  Node(int x){
    data=x;
    height=1;
    left=right=NULL;
  }
};

int getHeight(Node *root){

  if(!root) return 0;

  return root->height;
}
void updateHeight(Node *root){

  int leftHeight = getHeight(root->left);
  int rightHeight = getHeight(root->right);

  root->height = 1 + max(leftHeight, rightHeight);
}

/*  we'll have this case for rotateRight
      3 root
     2 temp
    1  

    & we've to convert to
    
     2
    1 3
*/

Node *rotateRight(Node *root){

  Node *temp=root->left;
  root->left=temp->right;
  temp->right=root;
  
  updateHeight(root);
  updateHeight(temp);
  return temp;
}


/*  we'll have this case for rotateLeft
      1 root
       2  temp
        3

    & we've to convert to
    
     2
    1 3
*/

Node *rotateLeft(Node *root){
  Node *temp=root->right;
  root->right=temp->left;
  temp->left=root;

  updateHeight(root);
  updateHeight(temp);
  return temp;
}



Node *Balance(Node *root){
  
  if(!root) return NULL;

  //update height
  updateHeight(root);

  //Balanace factor = left - right height
  int balance= getHeight(root->left)-getHeight(root->right);

  //Balance>1 left unbalance
  if(balance>1){
  /* There will be 2 types of unbalancing 
    left left
    left right
  */

  if(getHeight(root->left->left)>=getHeight(root->left->right)){
    root=rotateRight(root);
  }else{
    root->left=rotateLeft(root->left);   /*
    
    reason for doing root->left is   I've   
        3
      1
        2

    now we'll do rotateLeft of 1 & it'll make
        
       2
      1
      
      so we need to connect 2 with 3 which will be on the left of 3 that's why 3->left = 2
    */
    root=rotateRight(root);

    /*
    Now our tree looks like this
      3
     2
    1
    
    but it's still unbalanced so we we'll do rotate right 
    Right now our root is 3 but after rotate right we need to change that as 2 also 2 is returned from rotateRight so that's why 
    root=2
    our tree finally look like 
      2
     1 3

     which is balanced✅
    */
  }

  }

  //Balance <-1 Right unbalance
  else if(balance<-1){
    if(getHeight(root->right->right)>=getHeight(root->right->left)){
      root=rotateLeft(root);
    }else{
      root->right=rotateRight(root->right);
      root=rotateLeft(root);
    }
  }

  return root;

}



Node *insertBST(Node*root,int val){
  if(!root){
    return new Node(val);
  }

  if(val<root->data){
    root->left=insertBST(root->left,val);
  }
  else{
    root->right=insertBST(root->right,val);
  }

  return Balance(root);
}

void inorder(Node *root){
  if(!root) return;

  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}

void preorder(Node *root){
  if(!root) return;

  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}

int main() {
  Node *root=NULL;
  int val;
  cout<<"Enter value:"<<endl;
  while(1){
    
    cin>>val;
    if(val>=0){
      root=insertBST(root,val);
    }else{
      break;
    }
  }

  inorder(root);
  cout<<endl;
  preorder(root);
    return 0;
}