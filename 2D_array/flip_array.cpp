#include <iostream>
using namespace std;

int main() {
    int r=0,c=0;
    cout<<"Enter no of rows & cols";
    cin>>r;
    cin>>c;
    int arr[r][c];
    cout<<"Enter elements";
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
    cin>> arr[i][j]; 
    }  
    }

    int k=0,l=0;
    for(int i=r-1;i>=0;i--){
      for(int j=0;j<c;j++){
      swap(arr[i][j],arr[k][l]); 
      l++;
      }
      l=0;
      k++;
    }

    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
       cout<<arr[i][j]<<" "; 
      }
      cout<<endl;
    }

    return 0;
}