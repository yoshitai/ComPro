#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int a,b,k;
  vector<int> s;
  cin>>a>>b>>k;
  for(int i=a;i<=min(b,a+k-1);i++) cout<<i<<endl;
  for(int i=max(a+k,b-k+1);i<=b;i++) cout<<i<<endl;
}
