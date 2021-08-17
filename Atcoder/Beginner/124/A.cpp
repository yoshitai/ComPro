#include<iostream>

using namespace std;

int main(){
  int a,b;
  cin>>a>>b;
  if(a-1>=b) cout<<a+a-1<<endl;
  else if(a==b) cout<<a+b<<endl;
  else if(b-1>=a)cout<<b+b-1<<endl;
  return 0;
}
