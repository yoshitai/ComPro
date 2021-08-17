#include<iostream>

using namespace std;

int main(){
  string s;
  int n,mx=0;
  cin>>n>>s;
  int c=0;
  for(int i=0;i<n;i++){
    if(s[i]=='I') c++;
    else c--;
    mx=max(mx,c);
  }
  cout<<max(mx,0)<<endl;
}
