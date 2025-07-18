#include<iostream>
using namespace std;

int main(){
  long long n,dec=0,mul=1;
  cout<<"Enter binary number to converted to decimal";
  cin>>n;
  long long pout=n;
  while(n>0){
    long long r=n%10;
    dec+=r*mul;
    mul*=2;
    n/=10;
  }
  cout<<"Decimal of "<<pout<<" is "<<dec;
}