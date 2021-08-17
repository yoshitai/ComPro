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
    for(int i=0;i<N;++i) {
        for(int j=1;i+j<=N;j*=6) dp[i+j] = min(dp[i+j], dp[i]+1);
        for(int j=9;i+j<=N;j*=9) dp[i+j] = min(dp[i+j], dp[i]+1);
    }
    cout << dp[N] << endl;
}
