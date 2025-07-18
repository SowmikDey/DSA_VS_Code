#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        
        for(int i = 0; i < arr.size(); i++){
            int check = 0;
            for(int j = i; j < arr.size(); j++){
                check += arr[j];
                if(check == target){
                    // Changed: clear arr and return 1-based indices
                    arr.clear();
                    arr.push_back(i + 1);
                    arr.push_back(j + 1);
                    return arr;
                }
                else if(check > target){
                    break;
                }
            }
        }
        return vector<int>{-1};
    }
};



int main() {
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter " << n << " elements (non-negative integers): ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cout << "Enter the target sum: ";
    cin >> target;
    
    Solution sol;
    vector<int> result = sol.subarraySum(arr, target);
    
    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
