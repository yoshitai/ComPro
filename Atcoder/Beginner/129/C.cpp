#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;

int main() {
    int N,M;
    cin >> N >> M;
    vector<ll> dp(N+1, -1);
    dp[0]=1;
    dp[1]=1;
    int a;
    for(int i=0;i<M;++i) {
        cin >> a;
        dp[a] = 0;
    }
    for(int i=2;i<=N;++i) {
        if(dp[i]==0) continue;
        dp[i] = (dp[i-2]+dp[i-1])%mod;
    }
    cout << dp[N] << endl;
    
}
