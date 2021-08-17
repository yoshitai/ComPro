#include<iostream>
#include<algorithm>
#include<cmath>
//#include<string>

using namespace std;

int main(){
  string S;
  int mn=999,n,i=0;
  cin>>S;
  while(i <=S.size()-3){
    n=(S[i]-'0')*100+(S[i+1]-'0')*10+S[i+2]-'0';
    mn=min(mn,abs(753-n));
    i++;
  }
  cout<<mn<<endl;

  return 0;
}
