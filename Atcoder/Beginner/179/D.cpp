#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    
    int n,k,l,r;
    cin >> n >> k;
    set<int> s;
    int dp[n+5] = {};
    for(int i = 0; i < k; ++i) {
        cin >> l >> r;
        for(int j=l;j<=r;j++) s.insert(j);
    }

    // for(int i = 1; i < n; i++) {
    //     if(dp[i] == INF) continue;
    //     for(int x : s) {
    //         dp[i+x] = dp[i] + 1;
    //     }
    // }
    dp[1] = 1;
    for(auto x : s) {
        for(int i = 1; i + x <= n; i++) {
            if(dp[i] == 0) continue;
            dp[i+x] += 1;
        }
    }
    cout << dp[n] << endl;
}