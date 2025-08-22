#include <iostream>
#include<vector>
using namespace std;

int main() {
   int v,e;
   int a,b;
  cin>>v>>e;
  vector<int>A[v]; /*A[v] -> It'll create the edges 
                     vector<int> -> It'll create how the nodes are connected means 
                     there is an edge between 0 & 1 then
                     0 (It'll be represented by A[v]) -> 1(It'll be done through A[0].push_back(1))*/
  cin>>a>>b;
  A[a].push_back(b);
  A[b].push_back(a);

    return 0;
}