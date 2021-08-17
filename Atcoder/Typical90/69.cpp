#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#include <cstdio>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
const int mod = 1e9+7;
typedef long long ll;

int main() {
    ll N, K;
    cin >> N >> K;

    ll ans = 1LL;

    for(int i = 1; i <= N; ++i) {
        if(i == 1) ans = ans * K % mod;
        else if(i == 2) ans = ans * max(0LL, K - 1) % mod;
        else ans = ans * max(0LL, K - 2) % mod;
    }

    cout << ans << endl;

}