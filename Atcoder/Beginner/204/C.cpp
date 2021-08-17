#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 200000000;
const double PI = acos(-1.0);

vector<vector<int>> G;
vector<bool> visited;
int N, M;

int dfs(int i) {
    int res = 1;
    visited[i] = true;
    for(int g : G[i]) {
        if(visited[g]) continue;
        res += dfs(g);
    }
    return res;
}

int main() {
    cin >> N >> M;

    G.resize(N+1);
    visited.resize(N+1);
    for(int i = 1; i <= M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
    }

    int total = 0;
    for(int i = 1; i <= N; ++i) {
        fill(visited.begin(), visited.end(), false);
        total += dfs(i);
    }

    cout << total << endl;
}