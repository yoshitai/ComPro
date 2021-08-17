#include<iostream>
#include<string>
using namespace std;

int main(){
  string s;
  cin>>s;
  if(s.substr(5,2)<"05") cout<<"Heisei"<<endl;
  else cout<<"TBD"<<endl;

}
