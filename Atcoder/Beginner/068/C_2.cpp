#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 200000000;
const double PI = acos(-1.0);

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> G(N+1);

    for(int i=1;i<=M;++i) {
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    queue<int> q;
    vector<int> cnt(N+1,-1);
    cnt[1] = 0;
    q.push(1);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i:G[u]) {
            if(cnt[i] != -1) continue;
            cnt[i] = cnt[u] + 1;
            q.push(i);
        }
    }

    cout << (cnt[N] != 2 ? "IMPOSSIBLE" : "POSSIBLE") << endl;
}