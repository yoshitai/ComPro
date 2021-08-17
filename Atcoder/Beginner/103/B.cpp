#include<iostream>

using namespace std;

int main(){
  string s,t;
  bool flag=false;
  cin>>s>>t;
  for(int i=0;i<s.size();i++){
    if(s==t){
      flag=true;
      break;
    }
    s=s.back()+s.substr(0,s.size()-1);
  }
  if(flag) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}
