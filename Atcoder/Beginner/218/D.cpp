#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000000;
const double PI = acos(-1.0);

int main() {

    int N;
    cin >> N;
    vector<pair<int, int>> G(N);
    rep(i, N) cin >> G[i].first >> G[i].second;

    sort(G.begin(), G.end());
    int ans = 0;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            if(G[i].first < G[j].first && G[i].second < G[j].second) {
                if(binary_search(G.begin(), G.end(), make_pair(G[i].first, G[j].second)) &&
                binary_search(G.begin(), G.end(), make_pair(G[j].first, G[i].second))) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
}