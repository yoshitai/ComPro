#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    
    int N;
    cin >> N;
    ll A[N];
    rep(i,N) cin >> A[i];
    ll AC[N+1];
    AC[0] = 0;
    rep(i,N) AC[i+1] = (AC[i] + A[i]) % mod;
    ll ans = 0;
    for(int i = 0; i < N-1; i++) {
        ans += (A[i] * ((AC[N] - AC[i+1] + mod)%mod)) % mod;
    }
    cout << ans % mod << endl;
}