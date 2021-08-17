#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int N,max,t=0;
  cin>>N;
  vector<int> p(N);
  for(int i=0;i<N;i++){
    cin>>p.at(i);
    t+=p.at(i);
  }
  max=*max_element(p.begin(),p.end());
  cout<<t-max+max/2<<endl;
  return 0;
}
