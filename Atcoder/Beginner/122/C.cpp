#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int n;
string s;
vector<int> a;
int judge(int l,int r){
    int t=0;
    for(int i=l-1;i<r-1;i++){
      if(s[i]=='A' && s[i+1]=='C') t++;
    }
    return t;
}
int main(){
  int mx=0,t=0,q,l,r;
  cin>>n>>q;
  vector<int> c(n);
  cin>>s;
  for(int i=0;i<q;i++) cin>>l>>r;
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      if(s[j]=='A' && s[j+1]=='C') c.at(i)++;
    }
  }

    cout<<c.at(i)<<endl;
}
