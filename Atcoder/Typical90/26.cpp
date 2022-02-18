#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 200000000;

bool done[100005];
vector<vector<int>> G;
vector<int> group1, group2;

void dfs(int n, int d) {
    done[n] = true;
    if(d & 1) group1.push_back(n);
    else group2.push_back(n);

    for(int v : G[n]) {
        if(done[v]) continue;
        dfs(v, d+1);
    }
}

int main() {

    int N;
    cin >> N;

    G.resize(N+1);
    for(int i = 0; i < N-1; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    dfs(1, 0);

    if(group1.size() > group2.size()) {
        for(int i = 0; i < N/2; ++i) {
            cout << group1[i] << " ";
        }
    } else {
        for(int i = 0; i < N/2; ++i) {
            cout << group2[i] << " ";
        }
    }
    cout << endl;
}