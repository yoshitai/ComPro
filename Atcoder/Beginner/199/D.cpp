#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

int N, M;
int color[21]; // White:0, Red:1, Green:2, Blue:3
ll c;
vector<vector<int>> G(21);
vector<int> v;
bool visited[21];

void dfs(int i) {

    if(i == v.size()) {
        c++;
        return;
    }

    for(int j = 1; j <= 3; ++j) {
        bool ok = true;
        for(int e : G[v[i]]) {
            if(color[e] == j) ok = false;
        }

        if(ok) {
            color[v[i]] = j;
            dfs(i+1);
        }
    }

    color[v[i]] = 0;
    return;
}

vector<int> dfs2(int i) {
    vector<int> V;
    if(visited[i]) return V;
    V.push_back(i);
    visited[i] = true;

    for(int v : G[i]) {
        for(int n : dfs2(v)) {
            V.push_back(n);
        }
    }

    return V;
}

int main() {
    cin >> N >> M;
    for(int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    ll ans = 1;
    for(int i = 1; i <= N; ++i) {
        if(visited[i]) continue;
        v = dfs2(i);
        color[v[0]] = 1;
        c = 0;
        dfs(1);
        ans *= 3 * c;
    }

    cout << ans << endl;
}