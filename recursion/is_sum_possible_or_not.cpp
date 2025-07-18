#include <iostream>
using namespace std;

bool sum_pos(int arr[],int size,int total,int target,int index){

  if(index==size){
     if(total==target){
    return 1;
  }else
  return 0;
  }

 
  return sum_pos(arr,size,total,target,index+1) || sum_pos(arr,size,total+arr[index],target,index+1);
}

int main() {
  int arr[7] ={1,1,7,9,11,33,4};
  int sum=100;
  int total=0;
  cout<<sum_pos(arr,7,total,sum,0);
    return 0;
}