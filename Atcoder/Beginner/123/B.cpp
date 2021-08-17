#include<iostream>

using namespace std;

int main(){
  int a[6];
  int mx=0,t=0;
  for(int i=0;i<5;i++){
    cin>>a[i];
    if(10-(a[i]%10)>10-(a[mx]%10) && a[i]%10!=0) mx=i;
  }
  for(int i=0;i<5;i++){
    if(i==mx) continue;
    if(a[i]%10==0) t+=a[i];
    else t+=10-(a[i]%10)+a[i];
  }
  cout<<t+a[mx]<<endl;
}
