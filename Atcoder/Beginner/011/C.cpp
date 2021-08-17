#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;

int main() {
    int N;
    cin >> N;
    vector<int> dp(310, INF);
    int ng1,ng2,ng3;
    cin >> ng1 >> ng2 >> ng3;
    dp[N] = 0;
    for(int i=N;i>=0;--i) {
        if(i == ng1 || i==ng2 || i== ng3) continue;
        for(int j=1;j<=3;++j) {
            if(i-j < 0) continue;
            dp[i-j] = min(dp[i]+1, dp[i-j]);
        }
    }
    if(dp[0] <= 100) {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    


}
