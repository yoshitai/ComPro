#include<iostream>
#include<vector>

using namespace std;

#define rep(i,n) for(i=0;i<(int)(n);i++);

int main(){
  int n,y;
  cin>>n>>y;
  for(int i=0;i<=n;i++){
    for(int j=0;j<=n-i;j++){
      if(i*10000+j*5000+(n-i-j)*1000==y){
        cout<<i<<" "<<j<<" "<<(n-i-j)<<endl;
        return 0;
      }
    }
  }
  cout<<"-1 "<<"-1 "<<"-1"<<endl;
}
