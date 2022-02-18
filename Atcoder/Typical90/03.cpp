#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 200000000;
const double PI = acos(-1.0);

int N, p;
vector<vector<int>> G(100001);
int depth = 0;
bool visited[100005];

void dfs(int n, int d) {

    visited[n] = true;
    if(d > depth) {
        depth = d;
        p = n;
    }
    for(int e : G[n]) {
        if(visited[e]) continue;
        dfs(e, d + 1);
    }

    visited[n] = false;
}

int main() {

    cin >> N;

    for (int i = 0; i < N-1; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    dfs(1, 0);

    depth = 0;
    dfs(p, 0);

    cout << depth + 1 << endl;
    
}