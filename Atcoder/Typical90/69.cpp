#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const ll mod = 1e9+7;
const int INF = 200000000;
const double PI = acos(-1.0);

ll pow(ll k, ll n) {

    if (k <= 0) return 0LL;
    ll res = 1LL, x = k;
    while (n > 0) {
        if (n & 1LL) res = res * x % mod;
        x = x * x % mod;
        n >>= 1LL;
    }

    return res;
}

int main() {

    ll N, K;
    cin >> N >> K;

    ll ans;
    if (N == 1) ans = K;
    else if (N == 2) ans = K * (K - 1) % mod;
    else ans = K * (K - 1) % mod * pow(K - 2, N - 2) % mod;

    cout << ans << endl;

    return 0; 
}