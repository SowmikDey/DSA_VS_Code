#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int> duplicate;
        for(int i=0;i<arr.size();i++){
            int count=0;
        for(int j=i+1;j<arr.size();j++){
          if(arr[i]==arr[j]){
            count++;  
          }  
        }
         if(count>0){
        duplicate.push_back(arr[i]);      
          }
        }
        
      return duplicate;
    }
};

int main() {
  Solution obj;
  vector<int> arr;
  cout<<"Enter size of array:";
  int n,el=0;
  cin>>n;
  cout<<"Enter array elements:";
  for(int i=0;i<n;i++){
    cin>>el;
    arr.push_back(el);
  }
  vector<int> result = obj.findDuplicates(arr);


  cout << "Duplicate elements: ";
  for (int num : result) {
      cout << num << " ";
  }
  cout << endl;

  return 0;
}