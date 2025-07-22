#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//ascending order
bool sortbysec(pair<int,int>a,pair<int,int>b){

  return a.second<b.second;
}

//descending order
bool descendingbysec(pair<int,int>a,pair<int,int>b){

  return a.second>b.second;
}

//ascending but both first & second will be compared
bool ascendingbyfirstsec(pair<int,int>a,pair<int,int>b){

  return a.second<b.second || (a.second==b.second && a.first<b.first);
}

int main() {
    vector<pair<int,int>>v;
    v.push_back(make_pair(10,20));
    v.push_back(make_pair(1,3));
    v.push_back(make_pair(6,4));
    v.push_back(make_pair(2,4));
    v.push_back(make_pair(7,8));

    sort(v.begin(),v.end(),sortbysec);

     cout<<"Ascending order:\n";
    for(int i=0;i<v.size();i++)
    cout<<v[i].first<<" "<<v[i].second<<endl;

  sort(v.begin(),v.end(),descendingbysec);

    cout<<"Descending order:\n";
    for(int i=0;i<v.size();i++)
    cout<<v[i].first<<" "<<v[i].second<<endl;


   sort(v.begin(),v.end(),descendingbysec);

   /*
    if second of both elements are same then it'll compare the 1st means 1,3 6,3 where both have equal second
    so it'll compare 1 & 6
    */
   sort(v.begin(),v.end(),ascendingbyfirstsec);
    cout<<"Ascending order but taking both first & sec:\n";
    for(int i=0;i<v.size();i++)
    cout<<v[i].first<<" "<<v[i].second<<endl;  
     return 0;
}