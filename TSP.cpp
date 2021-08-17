#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const ll INF = 200000000000;
const double PI = acos(-1.0);

bool isExist(int num, int i) {
    return num & (1 << i);
}

int main() {

    int N;
    cin >> N;

    int A[N][N];
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) cin >> A[i][j];
    }

    int all = 1 << N;
    ll dp[all][N];
    for(int i = 0; i < all; ++i) {
        for(int j = 0; j < N; ++j) dp[i][j] = INF;
    }
    dp[0][0] = 0;

    for(int bit = 0; bit < all; ++bit) {
        for(int i = 0; i < N; ++i) {
            if(!isExist(bit, i)) continue;
            for(int j = 0; j < N; ++j) {
                chmin(dp[bit][j], dp[bit - (1 << i)][i] + A[i][j]);
            }
        }
    }

    cout << dp[1][1] << endl;
}