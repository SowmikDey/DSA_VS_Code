#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<int,int>>v;
    v.push_back(make_pair(10,20));
    v.push_back(make_pair(1,3));
    v.push_back(make_pair(6,5));
    v.push_back(make_pair(2,4));
    v.push_back(make_pair(7,8));

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    cout<<v[i].first<<" "<<v[i].second<<endl;

  sort(v.rbegin(),v.rend());

    cout<<"Descending order:\n";
    for(int i=0;i<v.size();i++)
    cout<<v[i].first<<" "<<v[i].second<<endl;
    return 0;
}