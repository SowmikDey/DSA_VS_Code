#include <iostream>
using namespace std;

int main() {
  int n,last_num;
    cout<<"Enter Size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter elements to array";
    for(int i=0;i<n;i++){
    cin>>arr[i];  
    }
    cout<<"Array: ";
    for(int i=0;i<n;i++){
      cout<<arr[i]<<"\t";
    }
    last_num=arr[n-1];
    for(int i=n-1;i>=0;i--){
      arr[i]=arr[i-1];
    }
    arr[0]=last_num;
    cout<<"\nRotated Array: ";
    for(int i=0;i<n;i++){
      cout<<arr[i]<<"\t";
    }
    return 0;
}