#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    
    int n;
    cin >> n;
    ll ans = 0;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n/i; ++j) {
            if(n - i * j > 0) ans++;
        }
    }
    cout << ans << endl;
}