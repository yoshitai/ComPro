#include<iostream>
#include<vector>

using namespace std;

int main(){
  int n,t=0;
  cin>>n;
  vector<int> v(n),c(n);
  for(int i=0;i<n;i++) cin>>v[i];
  for(int i=0;i<n;i++) cin>>c[i];
  for(int i=0;i<n;i++){
    if(v[i]>c[i]) t+=v[i]-c[i];
  }
  cout<<t<<endl;
}
