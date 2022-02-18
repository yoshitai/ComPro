#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const ll mod = 1e9+7;
const int INF = 200000000;
const double PI = acos(-1.0);

ll dp[100005];

int main() {

    int N;
    string S;
    cin >> N >> S;

    dp[0] = 1LL;
    string t = "atcoder";
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j <  7; ++j) {
            if(S[i] == t[j]) dp[j+1] = (dp[j+1] + dp[j]) % mod;
        }
    }

    cout << dp[7] << endl;
}