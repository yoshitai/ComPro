#include<iostream>
#include<vector>

using namespace std;

#define rep(i,n) for(i=0;i<(int)(n);i++);

int main(){
  int n,k;
  cin>>n>>k;
  int c=1;
  for(int i=0;i<n;i++){
    if(c*2>=c+k) c+=k;
    else c*=2;
  }
  cout<<c<<endl;
}
