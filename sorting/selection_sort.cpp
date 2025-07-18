#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++){
    cin>>arr[i];  
    }

    cout<<"Original Array:";
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }

    for(int i=0;i<n;i++){
      int index =i;
      for(int j=i;j<n;j++){
       if(arr[index]>arr[j]){
        index =j;
       }
       int temp = arr[index];
      arr[index] = arr[i];
      arr[i] = temp;
      }
      
    }

    cout<<"\nSorted array:";
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    return 0;
}