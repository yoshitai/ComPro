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

    string S;
    cin >> S;
    int N = (int)S.size();

    vector<vector<ll>> dp(N+1, vector<ll>(9, 0));
    dp[0][0] = 1;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j <= 8; ++j) dp[i+1][j] = (dp[i+1][j] + dp[i][j]) % mod;
        if(S[i] == 'c') dp[i+1][1] = (dp[i+1][1] + dp[i][0]) % mod;
        if(S[i] == 'h') dp[i+1][2] = (dp[i+1][2] + dp[i][1]) % mod;
        if(S[i] == 'o') dp[i+1][3] = (dp[i+1][3] + dp[i][2]) % mod;
        if(S[i] == 'k') dp[i+1][4] = (dp[i+1][4] + dp[i][3]) % mod;
        if(S[i] == 'u') dp[i+1][5] = (dp[i+1][5] + dp[i][4]) % mod;
        if(S[i] == 'd') dp[i+1][6] = (dp[i+1][6] + dp[i][5]) % mod;
        if(S[i] == 'a') dp[i+1][7] = (dp[i+1][7] + dp[i][6]) % mod;
        if(S[i] == 'i') dp[i+1][8] = (dp[i+1][8] + dp[i][7]) % mod;
    }

    cout << dp[N][8] << endl;

}