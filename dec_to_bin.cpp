#include<iostream>
#include<cmath>
using namespace std;

int main(){
  long long n,bin=0,i=0,mul=1;
  cout<<"Enter a number to be converted to binary:";
  cin>>n;
  long long pout = n;
  while(n>0){
  long long r= n%2;
  bin += r*mul;
  n/=2;
  mul*=10;
  }
  cout<<"Binary of "<<pout<<" is "<<bin;
}