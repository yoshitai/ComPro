#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const ll mod = 1e9+7;
const int INF = 200000000;
const double PI = acos(-1.0);

int main() {

    int N, M;
    cin >> N >> M;

    vector<vector<int>> G(N + 1);
    for(int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        if (a > b) G[a].push_back(b);
        else G[b].push_back(a);
    }

    int ans = 0;
    for(int i = 1; i <= N; ++i) {
        if (G[i].size() == 1) ans++;
    }

    cout << ans << endl;
}