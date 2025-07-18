#include <iostream>
using namespace std;

class Node{

  public:
  int data;
  Node *right;
  Node *left;

  Node(int x){
    data=x;
    right=left=NULL;
  }
};

Node *BST(Node *root,int value){

  if(!root) {
    root= new Node(value);
    return root;
  }

  if(root->data>value){
    root->left=BST(root->left,value);
    return root;
  }
  else{
    root->right=BST(root->right,value);
    return root;
  }
}


void inorder(Node *root){
  if(!root)return;

  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}

int main() {
  int arr[8]={40,30,32,35,80,90,100,120};

  Node *root=NULL;
  for(int i=0;i<8;i++)
  root=BST(root,arr[i]);
  
  inorder(root);
    return 0;
}