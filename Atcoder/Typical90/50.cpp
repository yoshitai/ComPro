#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#include <cstdio>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;

int main() {
    int N, L;
    cin >> N >> L;

    int dp[N];
    dp[0] = 1;
    for(int i = 1; i <= N; ++i) {
        if(i >= L) dp[i] = (dp[i-1] + dp[i-L]) % mod;
        else dp[i] = dp[i-1];
    }

    cout << dp[N] << endl;
}