#include<iostream>
#include<vector>
using namespace std;

int main(){
  string s;
  cin>>s;
  int a=(s[0]-'0')*10+(s[1]-'0');
  int b=(s[2]-'0')*10+(s[3]-'0');
  if((a>12 || a==0) && (b>0 && b<=12)) cout<<"YYMM"<<endl;
  else if((a>0 && a<=12) && (b>12 || b==0)) cout<<"MMYY"<<endl;
  else if((a>0 && a<=12) && (b>0 && b<=12)) cout<<"AMBIGUOUS"<<endl;
  else cout<<"NA"<<endl;
}
