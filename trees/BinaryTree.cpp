#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node *left;
  Node *right;

  Node(int x){
   data=x;
   left=NULL;
   right=NULL;
  }
};

Node *Binarytree(){
  int x;
  cout<<"Enter Data:";
  cin>>x;

  if(x==-1) return NULL;

  Node *root = new Node(x);
  cout<<"Enter the left child:"<<x<<"\n";
  root->left=Binarytree();
  cout<<"Enter the right child:"<<x<<"\n";
  root->right=Binarytree();

  return root;
}


void inorder(Node *ptr){
  if(ptr==NULL){
    return;
  }

  inorder(ptr->left);
  cout<<ptr->data;
  inorder(ptr->right);
}

void preorder(Node *ptr){
  if(ptr==nullptr)
  return;

  cout<<ptr->data;
  preorder(ptr->left);
  preorder(ptr->right);
}

void postorder(Node *ptr){
  if(ptr==nullptr) return;

  postorder(ptr->left);
  postorder(ptr->right);
  cout<<ptr->data;
}

int main() {
    Node *root=Binarytree();
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    return 0;
}