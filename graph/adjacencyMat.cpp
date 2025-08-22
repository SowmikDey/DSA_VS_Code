#include <iostream>
using namespace std;

int main() {
  
  int v,e;
  cin>>v>>e;
  int A[v][v];
  
  int a,b;
  for(int i=0;i<e;i++){
    cin>>a>>b;
    A[a][b]=1;
    A[b][a]=1;
  }

    return 0;
}