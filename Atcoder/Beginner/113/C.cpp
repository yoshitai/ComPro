#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int N, M;
  int x,y;
  vector< pair<int,int> > a[100001];
  cin>>N>>M;
  for(int i=0;i<M;i++){
    scanf("%d %d",&x,&y);
    a[x-1].push_back(make_pair(y,i)); //make_pair -> pairの生成
  }
  int p[100001],q[100001];
  for(int i=0;i<N;i++){
    sort(a[i].begin(),a[i].end());
    for(int j=0;j<a[i].size();j++){
      p[a[i][j].second]=i+1;
      q[a[i][j].second]=j+1;
    }
  }
  for(int i=0;i<M;i++){
    printf("%06d%06d\n",p[i],q[i]);
  }
}
