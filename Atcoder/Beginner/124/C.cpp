#include<iostream>

using namespace std;

int main(){
  string s,b,w;
  int i,c=0,k=0;
  cin>>s;
  for(i=0;b.size()<s.size();i+=2){
    b+="10";
    w+="01";
  }
  for(i=0;i<s.size();i++){
    if(s[i]!=b[i]) c++;
    if(s[i]!=w[i]) k++;
  }
  if(c<k) cout<<c<<endl;
  else cout<<k<<endl;
}
