#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<set>

using namespace std;


int main(){

  int c[50]={};
  int N,M,a,b;
  cin >> N >> M;
  for(int i=0;i<M;i++){
      cin >> a >> b;
      c[a-1]++;
      c[b-1]++;
  }
  for(int i=0;i<N;i++) cout << c[i] <<endl;
}
