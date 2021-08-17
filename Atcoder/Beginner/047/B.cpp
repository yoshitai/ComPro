#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<set>

using namespace std;


int main(){

  int W,H,N;
  bool p[100][100]={false};
  cin >> W >> H >> N;
  int x,y,a,w1=0,h1=0,w2=W,h2=H;
  for(int i=0;i<N;i++) {
      cin >> x >> y >> a;
      if(a == 1){
          for(int j=0;j<H;j++) for(int k=0;k<x;k++) p[j][k]=true;
      }
      if(a == 2){
          for(int j=0;j<H;j++) for(int k=x;k<W;k++) p[j][k]=true;
      }
      if(a == 3) {
          for(int j=H-y;j<H;j++) for(int k=0;k<W;k++) p[j][k]=true;
      }
      if(a == 4) {
          for(int j=0;j<H-y;j++) for(int k=0;k<W;k++) p[j][k]=true;
      }
  }
  int ans = 0;
  for(int i=0;i<H;i++) for(int j=0;j<W;j++) if(!p[i][j]) ans++;

  cout << ans <<endl;
}
