#include <iostream>
#include<map>
#include <unordered_map>
using namespace std;

int main() {
unordered_map<int,int>m;

 /*
 Advantage is it'll do insertion,deletion,searching in O(1)
 1 disadvantage is when we'll print something it won't follow any order 
 */ 

m[2]=1;
m[11]=13;

cout<<m[2]<<" "<<m[3]<<" "<<m[11];


cout<<endl<<m.count(11)<<endl; 


for(auto i=m.begin();i!=m.end();i++)
cout<<i->first<<" "<<i->second<<endl; 

cout<<m.size()<<endl;

    return 0;
}