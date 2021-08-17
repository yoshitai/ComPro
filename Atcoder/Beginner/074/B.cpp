#include<iostream>
#include<vector>
using namespace std;

#define rep(i,n) for(i=0;i<(int)(n);i++)
int main(){
  int n,k;
  cin>>n>>k;
  vector<int> a(n);
  int i,sum=0;
  rep(i,n) cin>>a[i];
  rep(i,n){
    sum+=min(a[i],abs(k-a[i]));
  }
  cout<<sum*2<<endl;
}
