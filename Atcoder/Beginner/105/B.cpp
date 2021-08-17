#include<iostream>

using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i=0;i*4<=n;i++){
    for(int j=0;j*7<=n;j++){
      if(i*4+j*7==n){
        cout<<"Yes"<<endl;
        return 0;
      }
    }
  }
  cout<<"No"<<endl;
}
