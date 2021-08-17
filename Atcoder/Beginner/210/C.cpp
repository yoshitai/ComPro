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

    int N, K;
    cin >> N >> K;
    vector<int> c(N);
    rep(i, N) cin >> c[i];

    set<int> color;
    for(int i = 0; i < K; ++i) {
        color.insert(c[i]);
    }
    int ans = (int) color.size();
    cout << ans << endl;
    for(int i = K; i < N; ++i) {
        cout << c[i-K] << endl;
        color.insert(c[i]);
        ans = max(ans, (int)color.size());
    }

    cout << ans << endl;
}