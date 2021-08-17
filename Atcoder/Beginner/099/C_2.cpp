#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int MAX = 101000;


int main() {
    int N;
    cin >> N;
    vector<int> dp(MAX,N);
    dp[0]=0;
    for(int i=1;i<=N;++i) {
        for(int j=1;j<=i;j*=6) dp[i] = min(dp[i], dp[i-j]+1);
        for(int j=9;j<=i;j*=9) dp[i] = min(dp[i], dp[i-j]+1);
    }
    cout << dp[N] << endl;
}
