#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  int N,T,c,t,mn=1000;
  int f=0;
  cin>>N>>T;
  for(int i=0;i<N;i++){
    cin>>c>>t;
    if(t<=T){
      mn=min(mn,c);
      f=1;
    }
  }
  if(f) cout<<mn<<endl;
  else cout<<"TLE"<<endl;
  return 0;

}
