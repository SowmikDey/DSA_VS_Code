#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void sort012(vector<int>& arr) {
        
        vector<int> sorted_arr;
        int prev_size= arr.size();
        for(int i=0;i<3;i++){
            int count=0;
            for(int j=0;j<arr.size();j++){
            if(arr[j]==i){
            count++;    
            }    
            }
            
            if(count>0){
            for(int k=0;k<count;k++){
            arr.push_back(i);    
            }    
            }
        }
        arr.erase(arr.begin(),arr.begin()+prev_size);
    }
};

int main() {
  vector<int> arr ;

  cout<<"Enter size of array:";
  int n;
  cin>>n;
  int el;

  cout<<"Enter elements(only 0s,1s,2s):";
  for(int i=0;i<n;i++){
    cin>>el;
    arr.push_back(el);
  }

  cout << "Original array: ";
  for (int num : arr) {
      cout << num << " ";
  }
  cout << endl;

  Solution sol;
  sol.sort012(arr);

  cout << "Sorted array: ";
  for (int num : arr) {
      cout << num << " ";
  }
  cout << endl;

  return 0;
}