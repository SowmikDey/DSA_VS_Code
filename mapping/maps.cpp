#include <iostream>
#include<map>
using namespace std;

int main() {
map<int,int>m;

m[2]=1;
m[11]=13;

cout<<m[2]<<" "<<m[3]<<" "<<m[11];

//other ways to see keys exists or not
cout<<endl<<m.count(11)<<endl; // 1 means exists otherwise 0 means not exists


for(auto i=m.begin();i!=m.end();i++)
cout<<i->first<<" "<<i->second<<endl;  //Here i->first means key & second means value

//To check size
cout<<m.size()<<endl;

    return 0;
}