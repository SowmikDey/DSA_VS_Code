#include <iostream>
using namespace std;

class Queue{

  int front;
  int rear;
  int size;
  int *q;
  
  public:
  Queue(int size){
    q= new int[size];
    this->size = size;
    front = 0;
    rear = 0;
  }

  void push(int data){
   
    if(rear==size){
     cout<<"Queue is full \n";
    }

    q[rear++] = data;
  }

  void pop(){

    if(front==rear){
      cout<<"Queue is empty \n";
    }
    
    front++;
  }

  void traverse(){

    if (front == rear) {
            cout << "Queue is empty\n";
            return;
        }
        for (int i = front; i < rear; i++) {
            cout << q[i] << " ";
        }
        cout << endl;
  }

};

int main() {

  int size;
  int data;

  cout<<"Enter size:";
  cin>>size;
  Queue q(size);

  for(int i=0;i<size;i++){
    cout<<"Enter data:";
    cin>>data;
    q.push(data);
  }

  q.traverse();


  return 0;
}