#include<iostream>

using namespace std;

int main(){
  char s;
  cin>>s;
  if(s=='A') cout<<'T'<<endl;
  else if(s=='T') cout<<'A'<<endl;
  else if(s=='C') cout<<'G'<<endl;
  else if(s=='G') cout<<'C'<<endl;
  return 0;
}
