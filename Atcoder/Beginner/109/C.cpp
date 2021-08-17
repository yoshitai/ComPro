#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

#define rep(i,n) for(i=0;i<(int)(n);i++);

int gcb(int a,int b){
  if(a==b) return a;
  if(b==0) return a;
  return gcb(b,a%b);
}
int main(){
  int n,X,g;
  int x[100005]={0};
  cin>>n>>X;
  for(int i = 0;i<n;i++)  cin>>x[i];
  if(n==1) g=abs(X-x[0]);
  else if(abs(X-x[0])<abs(X-x[1])){
    g = gcb(abs(X-x[1]),abs(X-x[0]));
  } else{
    g = gcb(abs(X-x[0]),abs(X-x[1]));
  }
  for(int i=2;i<n;i++){
    g=gcb(abs(X-x[i]),g);
  }
  cout<<g<<endl;


}
