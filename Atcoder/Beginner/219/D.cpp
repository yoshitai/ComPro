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

    int N;
    cin >> N;
    int X, Y;
    cin >> X >> Y;
    vector<int> A(N), B(N);
    rep(i, N) cin >> A[i] >> B[i];

    vector<vector<vector<int>>> dp(N+1, vector<vector<int>>(X+1, vector<int>(Y+1, INF)));
    dp[0][0][0] = 0;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j <= X; ++j) {
            for(int k = 0; k <= Y; ++k) {
                if(dp[i][j][k] == INF) continue;
                chmin(dp[i+1][j][k], dp[i][j][k]);
                chmin(dp[i+1][min(X, j+A[i])][min(Y, k+B[i])], dp[i][j][k]+1);
            }
        }
    }

    if(dp[N][X][Y] != INF) cout << dp[N][X][Y] << endl;
    else cout << "-1" << endl;
}