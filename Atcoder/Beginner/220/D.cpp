#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const ll mod = 998244353;
const int INF = 2000000000;
const double PI = acos(-1.0);

int main() {

    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];
    vector<vector<ll>> dp(N, vector<ll>(10, 0));
    dp[0][A[0]] = 1;
    for(int i = 1; i < N; ++i) {
        for(int j = 0; j < 10; ++j) {
            if(dp[i-1][j]) {
                int a = (j + A[i]) % 10;
                int b = (j * A[i]) % 10;
                dp[i][a] = (dp[i][a] + dp[i-1][j]) % mod;
                dp[i][b] = (dp[i][b] + dp[i-1][j]) % mod;
            }
        }
    }

    for(int i = 0; i < 10; ++i) {
        cout << dp[N-1][i] << endl;
    }
}