#include<iostream>

using namespace std;

int main(){
  int N,n;
  cin>>N;
  n=N/100;
  n=n*100+n*10+n;
  if(N>n) cout<<n+111<<endl;
  else cout<<n<<endl;
  return 0;
}
