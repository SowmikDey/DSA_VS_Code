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
        vector<int> d;
    int i = 0, j = 0;
    while(i < a.size() && j < b.size()){
        if(a[i] < b[j]){
            if(d.empty() || d.back() != a[i])
                d.push_back(a[i]);
            i++;
        }
        else if(a[i] > b[j]){
            if(d.empty() || d.back() != b[j])
                d.push_back(b[j]);
            j++;
        }
        else {
            if(d.empty() || d.back() != a[i])
                d.push_back(a[i]);
            i++; j++;
        }
    }
    while(i < a.size()){
        if(d.empty() || d.back() != a[i])
            d.push_back(a[i]);
        i++;
    }
    while(j < b.size()){
        if(d.empty() || d.back() != b[j])
            d.push_back(b[j]);
        j++;
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