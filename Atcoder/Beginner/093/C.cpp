#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define rep(i,n) for(i=0;i<(int)(n);i++);

int main(){
  int a,b,c;
  cin>>a>>b>>c;
  int ans;
  int m=max({a,b,c});
  if((3*m+a+b+c)%2==0){
    ans=(3*m-(a+b+c))/2;
  }
  else{
    ans=(3*(m+1)-(a+b+c))/2;
  }
  cout<<ans<<endl;
}
