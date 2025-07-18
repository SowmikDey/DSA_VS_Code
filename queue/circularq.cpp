#include <iostream>
using namespace std;

class queue{

   int front;
  int rear;
  int size;
  int *q;

  public:
  queue(int size){
    q=new int[size];
    this->size=size;
    front=rear=-1;
  }

  bool empty(){
    return front==-1 && rear==-1;
  }


  bool full(){
    return front==(rear+1)%size;
  }

  void push(int data){

    if(empty()){
      front=rear=0;
      q[rear]=data;
      return;
    }

    else if(full()){
      cout<<"Queue is full";
      return;
    }

    else{
      rear=(rear+1)%size;
      q[rear]=data;
      return;
    }
  }

  void pop(){
    if(empty()){
      cout<<"Queue is empty";
      return;
    }
    else if(front==rear){
      cout<<"Element is popped "<<q[front]<<endl;
      front=rear=-1;
      return;
    }
    else{
      cout<<"Element is popped "<<q[front]<<endl;
      front=(front+1)%size;
      return;
    }
  }
};

int main() {
  int size,data;
  cout<<"Enter size:";
  cin>>size;
  queue q(size);

  for(int i=0;i<size;i++){
    cout<<"Enter data:";
    cin>>data;
    q.push(data);
  }

  q.pop();
    return 0;
}