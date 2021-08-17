#include<iostream>
#include<vector>
using namespace std;

int main(){
  string s;
  vector<bool> a(26,false);
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(a[s[i]-'a']){
      cout<<"no"<<endl;
      return 0;
    }
    else{
      a[s[i]-'a']=true;
    }
  }
  cout<<"yes"<<endl;
}
