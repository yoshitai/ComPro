#include<iostream>
#include<vector>

using namespace std;

#define rep(i,n) for(i=0;i<(int)(n);i++);

int main(){
  long long n;
  long long i;
  cin>>n;
  for(i=1;i*i<=n;i++);
  cout<<(i-1)*(i-1)<<endl;
}
