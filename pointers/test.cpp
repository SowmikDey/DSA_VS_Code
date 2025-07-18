#include <iostream>
using namespace std;

int main() {
//    int arr[4] = {1,2,3,4};
//    int *p = arr;
//    cout<<&arr<<endl;
//    cout<<&arr[1]<<endl;
//    cout<<*(p+1);

   int arr2[3][3] = {1,2,3,4,5,6,7,8,9};
   cout<<arr2<<endl;
   cout<<arr2+1<<endl;
   cout<<arr2+2<<endl;
   cout<<*arr2+1<<endl;
   cout<<&arr2[0][1]<<endl;
    return 0;
}