#include <iostream>
using namespace std;

class Node{
public:
  Node* next;
  int data;
  Node(int data){
    this->data = data;
    next = NULL;
  }
};

class Stack{

  Node *top;

  public:
  Stack(){
 top=NULL;
  }

  void push(int data){
  Node *temp = new Node(data);
  if(!temp){
    cout<<"Stack Overflow";
  }

  temp->next=top;
  top=temp;
  }

  void pop(){
   Node* temp=top;
   top=top->next;
   delete temp;
  }

  int peek(){
    return top->data;
  }
};

int main() {
  Stack s;
  for(int i=0;i<5;i++){
    s.push(i+1);
    cout<<s.peek()<<" ";
  }

  s.pop();
  cout<<s.peek();
    return 0;
}