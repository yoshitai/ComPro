#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
  int N,t=0,ele;
  cin>>N;
  vector<int> a(N);
  for(int i=0;i<N;i++){
    cin>>a.at(i);
    t+=a.at(i);
  }
  ele=*max_element(a.begin(),a.end());
  if(ele<t-ele){
    cout<<"Yes"<<endl;
  }
  else cout<<"No"<<endl;
  return 0;
}
