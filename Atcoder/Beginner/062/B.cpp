#include<iostream>
#include<vector>

using namespace std;

#define rep(i,n) for(i=0;i<(int)(n);i++);

int main(){
  string s;
  int h,w;
  cin>>h>>w;
  vector<string> a(h);
  for(int i=0;i<h;i++) cin>>a[i];
  int i;
  for(int i=0;i<w+2;i++) cout<<'#';
  cout<<endl;
  for(int i=0;i<h;i++){
    cout<<'#'<<a[i]<<'#';
    cout<<endl;
  }
  for(int i=0;i<w+2;i++) cout<<'#';
  cout<<endl;
}
