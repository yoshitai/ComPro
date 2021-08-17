#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
  string s;
  int mx=0,t=0;
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(s[i]=='A' || s[i]=='C' ||s[i]=='G' || s[i]=='T'){
      t=1;
      for(int j=i+1;j<s.size();j++){
        if(s[j]=='A' || s[j]=='C' ||s[j]=='G' || s[j]=='T') t++;
        else break;
      }
    }
    mx=max(mx,t);
  }
  cout<<mx<<endl;
}
