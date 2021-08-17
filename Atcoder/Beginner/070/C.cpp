#include<iostream>
#include<vector>

using namespace std;

#define rep(i,n) for(i=0;i<(int)(n);i++);

long long gcb(long long a,long long b){
  if(a<b) return a? gcb(a,b%a) : b;
  return b? gcb(b,a%b) : a;
}

int main(){
  int n;
  cin>>n;
  vector<long long> t(n);
  long long l;
  for(int i=0;i<n;i++) cin>>t[i];
  if(n==1) l=t[0];
  else{
    l=t[0]/gcb(t[0],t[1])*t[1];
    for(int i=2;i<n;i++){
      l=l/gcb(t[i],l)*t[i];
    }
  }
  cout<<l<<endl;
}
