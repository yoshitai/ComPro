#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int a,b,c;
  cin>>a>>b>>c;
  cout<<min(min(a*b,a*c),b*c)/2<<endl;
  return 0;
}
