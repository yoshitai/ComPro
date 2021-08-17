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
    int N;
    cin >> N;

    ll ans = 1;
    for(int i = 0; i < N; ++i) {
        ll t = 0;
        for(int j = 0; j < 6; ++j) {
            ll a;
            cin >> a;
            t += a;
        }
        ans = (ans * t) % mod;
    }

    cout << ans << endl;
}