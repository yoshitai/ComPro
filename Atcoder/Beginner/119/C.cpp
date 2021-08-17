#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int N;
int L[8];
int A, B, C;

int dfs(int k, int a, int b, int c) {
    if (k == N) {
        if (a == 0 || b == 0 || c == 0) return 1e9;
        return abs(a - A) + abs(b - B) + abs(c - C);
    }
    int ans = 1e9;
    ans = min(ans, dfs(k + 1, a + L[k], b, c) + (a > 0 ? 10 : 0));
    cout<<"1"<<endl;
    ans = min(ans, dfs(k + 1, a, b + L[k], c) + (b > 0 ? 10 : 0));
    cout<<"2"<<endl;
    ans = min(ans, dfs(k + 1, a, b, c + L[k]) + (c > 0 ? 10 : 0));
    cout<<"3"<<endl;
    ans = min(ans, dfs(k + 1, a, b, c));
    cout<<"end"<<endl;
    return ans;
}

int main() {
    cin >> N >> A >> B >> C;
    for (int i = 0; i < N; i++) {
        cin >> L[i];
    }
    cout << dfs(0, 0, 0, 0) << endl;
}

/*#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int N,A,B,C;
vector<int> l;

int dfs(int n,int a,int b,int c){
  if(n==N){
    if(min(min(a,b),c)>0) return abs(A-a)+abs(B-b)+abs(C-c);
    else return 1<<20;
  }
  int ret1=dfs(n+1,a,b,c);
  int ret2=dfs(n+1,a+l.at(n),b,c)+10;
  int ret3=dfs(n+1,a,b+l.at(n),c)+10;
  int ret4=dfs(n+1,a,b,c+l.at(n))+10;
  return min(min(min(ret1,ret2),ret3),ret4);
}

int main(){
  cin>>N>>A>>B>>C;
  for(int i=0;i<N;i++) cin>>l.at(i);
  cout<<dfs(0,0,0,0)<<endl;
  return 0;
}*/
