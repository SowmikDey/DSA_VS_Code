#include <iostream>
#include<vector>
using namespace std;

int main() {
  pair<int,int>p;

  /*
  Method-1:
  p.first=10;
  p.second=20;
  */

  //Method-2:
  p=make_pair(10,20);
  cout<<p.first<<" "<<p.second;

  //inorder to make 3 elements we can follow the below:
  pair<int,pair<int,int>>p3;

  p3.first=11;
  p3.second.first=12;
  p3.second.second=13;
  
  cout<<"\n"<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<"\n";
  //inorder to make 4 elements

  pair<int,pair<int,pair<int,int>>>p4;

  p4.first=21;
  p4.second.first=22;
  p4.second.second.first=23;
  p4.second.second.second=24;

  cout<<p4.first<<" "<<p4.second.first<<" "<< p4.second.second.first<<" "<<p4.second.second.second;

  return 0;
}