//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        vector <int>c;
        vector <int>d;
        int count;
        for(int i=0;i<a.size();i++){
           c.push_back(a[i]);
        }
        for(int j=0;j<b.size();j++){
        c.push_back(b[j]);    
        }
        
        for(int i=0;i<c.size()-1;i++){
        for(int j=i;j>=0;j--){
        if(c[j]>c[j+1]){
        int temp = c[j];
        c[j] = c[j+1];
        c[j+1] = temp;
        }   
        }    
        }
        
        d.push_back(c[0]);
     for (int i = 1; i < c.size(); i++) {
        if (c[i] != c[i - 1]) {
        d.push_back(c[i]);
       }
    }

        
        return d;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends