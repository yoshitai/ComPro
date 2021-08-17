#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int N,M,X,Y,mx,mn;
  cin>>N>>M>>X>>Y;
  vector<int> x(N+1);
  vector<int> y(M+1);
  x.at(0)=X;
  y.at(0)=Y;
  for(int i=1;i<=N;i++) cin>>x.at(i);
  for(int i=1;i<=M;i++) cin>>y.at(i);
  mx=*max_element(x.begin(),x.end());
  mn=*min_element(y.begin(),y.end());
  if(mx<mn) cout<<"No War"<<endl;
  else cout<<"War"<<endl;
}
