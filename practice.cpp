#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
typedef long long ll;

int main() {

    ll N, K;
    cin >> N >> K;

    ll ans = 0LL;
    for(int i = 1; i <= N; ++i) {
        ans += min(N, K / i);
    }

    cout << ans << endl;
}