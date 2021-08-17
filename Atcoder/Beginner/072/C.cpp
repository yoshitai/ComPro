#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int n,c=0,k;
  cin>>n;
  int a[100005]={0};
  for(int i=0;i<n;i++){
    cin>>k;
    a[k]++;
  }
  for(int i=2;i<=100000;i++){
    int m=0;
    m=a[i-2]+a[i-1]+a[i];
    c=max(c,m);
  }
  cout<<c<<endl;
}
