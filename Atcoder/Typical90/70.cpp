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

    vector<int> x(N), y(N);
    rep(i, N) cin >> x[i] >> y[i];
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    int px = (x[(N - 1) / 2] + x[N / 2]) / 2;
    int py = (y[(N - 1) / 2] + y[N / 2]) / 2;

    ll ans = 0LL;
    for(int i = 0; i < N; ++i) {
        ans += (ll)abs(px - x[i]) + abs(py - y[i]);
    }

    cout << ans << endl;
}