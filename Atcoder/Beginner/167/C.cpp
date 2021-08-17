#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 200000000;

int N,M,X;
ll ans = INF;
int A[15][15],C[15];

void dfs(int n, vector<int> p, ll count) {
    if(n == N) {
        vector<int> g(M,0);
        for(int c:p)
            for(int i=0;i<M;++i) g[i] += A[c][i];
        for(int s:g) if(s < X) return;
        ans = min(ans, count);
        return;
    }
    dfs(n+1, p, count);
    p.push_back(n);
    dfs(n+1, p, count+C[n]);
}

int main() {
    cin >> N >> M >> X;
    int a;
    for (int i = 0; i < N; i++){
        cin >> C[i];
        for (int j = 0; j < M; ++j) cin >> A[i][j];
    }
    vector<int> P;
    dfs(0,P,0);
    if(ans == INF) cout << -1 << endl;
    else cout << ans << endl;
}
