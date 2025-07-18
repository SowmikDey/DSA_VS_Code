#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter array size:";
  cin>>n;
  int arr[n];
  cout<<"Enter array elements:";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      cout<<arr[j];
    }
    cout<<endl;
  }
    return 0;
}