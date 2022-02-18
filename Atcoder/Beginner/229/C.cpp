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

    ll N, W;
    cin >> N >> W;
    vector<int> A(N), B(N);
    vector<pair<ll, ll>> p(N);
    rep(i, N) {
        cin >> A[i] >> B[i];
        p[i].first = A[i];
        p[i].second = B[i];
    }

    sort(p.begin(), p.end());
    reverse(p.begin(), p.end());

    ll ans = 0LL;
    for(int i = 0; i < N; ++i) {
        if(W <= 0) break;
        ll u = min(W, p[i].second);
        ans += u * p[i].first;
        W -= u;
    }

    cout << ans << endl;
}