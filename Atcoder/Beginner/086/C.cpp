#include<iostream>
#include<vector>
#include<cmath>

using namespace std;


int main(){
  int n,t1=0,x1=0,y1=0;
  cin>>n;
  vector<int> time(n),x(n),y(n);
  for(int i=0;i<n;i++){
    cin>>time[i]>>x[i]>>y[i];
  }
  for(int i=0;i<n;i++){
    int d=abs(x[i]-x1)+abs(y[i]-y1);
    int t=time[i]-t1;
    if(!(d<=t && t%2 == d%2)){
      cout<<"No"<<endl;
      return 0;
    }
    x1=x[i]; y1=y[i]; t1=time[i];
  }
  cout<<"Yes"<<endl;
}
