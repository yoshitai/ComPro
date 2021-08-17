#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n,m,x;
  cin>>n>>m>>x;
  vector<int> A(m);
  for(int i=0;i<m;i++) cin>>A[i];
  int c=0,i=0;
  while(x>A[i]){
    c++;
    i++;
  }
  cout<<min(c,m-c)<<endl;
}
