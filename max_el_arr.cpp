#include <iostream>
using namespace std;

int main() {
    int n,largest,smallest;
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
    largest=arr[0];
    for(int i=0;i<n;i++){
      if(arr[i]>largest)
      largest=arr[i];
    }
    cout<<"\nLargest Element in the array "<<largest;
    smallest=arr[0];
    for(int i=0;i<n;i++){
    if(arr[i]<smallest)
    smallest=arr[i];  
    }
    cout<<"\nSmallest Element in the array "<<smallest;
}