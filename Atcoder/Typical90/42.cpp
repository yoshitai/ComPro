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

    int K;
    cin >> K;

    if(K % 9 != 0) {
        cout << 0 << endl;
        return 0;
    }

    vector<ll> dp(K+1, 0);
    dp[0] = 1LL;
    for(int i = 1; i <= K; ++i) {
        int B = min(i, 9);
        for(int j = 1; j <= B; ++j) dp[i] = (dp[i] + dp[i-j]) % mod;
    }

    cout << dp[K] << endl;
}