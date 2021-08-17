#include<iostream>

using namespace std;

int main(){
  string s;
  cin>>s;
  if(s[0]!='A'){
    cout<<"WA"<<endl;
    return 0;
  }
  int c=0;
  for(int i=2;i<s.size()-1;i++){
    if(s[i]=='C') c++;
    else if(s[i]<='Z'){
      cout<<"WA"<<endl;
      return 0;
    }
  }
  if(c!=1){
    cout<<"WA"<<endl;
    return 0;
  }
  if(s[1]<='Z' || s[s.size()-1]<='Z'){
    cout<<"WA"<<endl;
    return 0;
  }
  cout<<"AC"<<endl;
}
