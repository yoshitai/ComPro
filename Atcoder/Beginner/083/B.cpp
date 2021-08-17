#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n,a,b,sum=0;
  cin>>n>>a>>b;
  for(int i=a;i<=n;i++){
    int c=0;
    int j=i;
    while(j>0){
      c+=j%10;
      j/=10;
    }
    if(c>=a && c<=b) sum+=i;
  }
  cout<<sum<<endl;
}
