#include <iostream>
using namespace std;

void printStrings(string s,int index,int size,string temp){

 if(temp.size()!=0)
 cout<<temp<<" ";

  if(index==size){
    return;
  }

  if(temp.size()==0){
    printStrings(s,index+1,size,temp);
    temp+=s[index];
    printStrings(s,index+1,size,temp);
  }else{
    temp+=s[index];
    printStrings(s,index+1,size,temp);
  }
}

int main() {
  string s;
  cout<<"Enter string:";
  cin>>s;
  int i=0,n=s.size();
  string t;
  printStrings(s,i,n,t);
    return 0;
}