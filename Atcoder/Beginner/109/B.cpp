#include<iostream>
#include<string>
#include<vector>
#include<set>

using namespace std;

int main(){
  int n,flag=0;
  cin>>n;
  vector<string> w(n);
  set<string> s;
  for(int i=0;i<n;i++){
    cin>>w.at(i);
    if(s.count(w.at(i))) flag=1;
    s.insert(w.at(i));
  }
  for(int i=0;i<n-1;i++){
    if(w[i][w[i].size()-1]!=w[i+1][0]){
      flag=1;
      break;
    }
  }
  if(flag) cout<<"No"<<endl;
  else cout<<"Yes"<<endl;
  return 0;

}
