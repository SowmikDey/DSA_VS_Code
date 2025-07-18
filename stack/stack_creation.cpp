#include <iostream>
using namespace std;


 class Stack{
  
  int top;
  int *arr;
  int size;

  public:
  Stack(int size){
    arr = new int[size];
    this->size=size;
    top=-1;
  }

  public:
  void push(int data){

    if(top==size){
      cout<<"Stack Overflow";
      return;
    }

    ++top;
    arr[top] = data; 
  }

  public:
  void pop(){
    if(top<0){
      cout<<"Stack Underflow";
      return;
    }

    --top;
    cout<<arr[top]<<" ";
  }

  public:
  int peek(){
    if(top==-1){
      cout<<"Stack Underflow";
      return -1;
    }

    return arr[top];
  }

  public:
  bool empty(){
    return top==-1;
  }

 };

int main() {
   
  Stack s(5);

  for(int i=0;i<5;i++){
    s.push(i+1);
    cout<<s.peek()<<" ";
  }

  s.pop();
  cout<<s.peek();

  return 0;
}