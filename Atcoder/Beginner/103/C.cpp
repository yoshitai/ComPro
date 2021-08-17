#include<iostream>
#include<vector>

using namespace std;

#define rep(i,n) for(i=0;i<(int)(n);i++);

int main(){
  int n,i;
  int a;
  int t=0;
  cin>>n;
  for(i=0;i<n;i++){
    cin>>a;
    t+=a-1;
  }
  cout<<t<<endl;
}
