#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> G(n+1);
    for(int i=1;i<=n;++i) {
        int u,k;
        cin >> u >> k;
        for(int j=0;j<k;++j) {
            int v;
            cin >> v;
            G[u].push_back(v);
        }
    }
    queue<int> q;
    vector<int> cnt(n+1,-1);
    cnt[1] = 0;
    q.push(1);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for(int i:G[u]) {
            if(cnt[i] != -1) continue;
            cnt[i] = cnt[u] + 1;
            q.push(i);
        }
    }
    for(int i=1;i<=n;++i) cout << i << " " << cnt[i] << endl;
}
