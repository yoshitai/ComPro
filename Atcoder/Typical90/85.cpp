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

    ll K;
    cin >> K;

    int ans = 0;
    for(ll i = 1LL; i * i <= K; ++i) {
        if(K % i == 0LL) {
            ll b = K / i;
            for(ll j = i; j * j <= b; ++j) {
                if(b % j == 0LL) ans++;
            }
        }
    }

    cout << ans << endl;
}