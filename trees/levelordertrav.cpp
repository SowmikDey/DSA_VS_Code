#include <iostream>
#include<queue>
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


void lvlorderTrav(Node *p){
queue<Node*> q;
q.push(p);

while(!q.empty()){
  Node *temp = q.front();
  cout<<temp->data;
  q.pop();
  if(temp->left) q.push(temp->left);
  if(temp->right) q.push(temp->right);
}


}

int main() {
    Node *root = Binarytree();
    lvlorderTrav(root);
    return 0;
}