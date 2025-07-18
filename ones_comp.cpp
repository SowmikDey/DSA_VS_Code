#include <iostream>
using namespace std;

int main() {
  long long n,sum=0,mul=1;
  cout<<"Enter number to do 1's complement";
  cin>>n;
  long long pout=n;
  while(n>0){
  long long r=n%10;
  r=r^1;
  sum+=r*mul;
  mul*=10;
  n/=10;
  }
  cout<<"1's compliment of "<<pout<<" is  "<<sum;
  return 0;
}