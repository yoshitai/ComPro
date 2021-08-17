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
    int N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];
    ll ans = 1LL << 35;
    for(int i = 0; i < (1<<(N-1)); ++i) {
        vector<ll> v;
        ll val = A[N-1];
        for(int j = 0; j < N-1; ++j) {
            if(i & (1 << j)) {
                v.push_back(val);
                val = 0;
            }
            val = val | A[N-2-j];
        }
        v.push_back(val);
        ll t = 0;
        for(ll n : v) t = t ^ n;
        chmin(ans, t);
    }
    cout << ans << endl;
}