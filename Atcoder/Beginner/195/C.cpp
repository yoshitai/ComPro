#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    ll N;
    cin >> N;
    ll ans = 0, m = 1LL;
    for(ll i = 1e6; i <= 1e18; i *= 1000) {
        ll j = i / 1000LL;
        if(N >= i) ans += (i - j) * m;
        else ans += max(N - j + 1LL, 0LL) * m;
        m++;
    }
    cout << ans << endl;
}