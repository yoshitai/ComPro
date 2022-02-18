 #include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const ll mod = 1e9+7;
const int INF = 200000000;
const double PI = acos(-1.0);

unsigned long long power10[22];

void init() {
    power10[0] = 1;
    for (int i = 1; i <= 19; ++i) power10[i] = 10ULL * power10[i-1];
}

ll modpow(ll a, ll b) {
    ll p = 1, q = a;
    
}

ll f(ll x) {
    ll v1 = x % mod;
    ll v2 = (x + 1) % mod;
    ll v = v1 * v2 % mod;
    return Div(  )
}
int main() {

    unsigned long long L, R;
    init();
    cin >> L >> R;

    ll Answer = 0;
    for (int i = 1; i <= 19; ++i) {
        unsigned long long vl = max(L, power10[i-1]);
        unsigned long long vr = min(R, power10[i] - 1ULL);
        if (vl > vr) continue;
        long long val = (f(vr) - f(vl-1) + mod) % mod;

    }
} 