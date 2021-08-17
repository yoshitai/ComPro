#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    
    ll X, D, K;
    cin >> X >> K >> D;
    ll ans;
    X = abs(X);
    ll pc = (X/D);
    if (pc >= K) ans = X - K * D;
    else {
        ll A1 = X - pc * D;
        ll A2 = A1 - D;
        if(pc % 2 == 0) {
            if(K % 2 == 0) ans = A1;
            else ans = abs(A2);
        }
        else {
            if(K % 2 == 0) ans = abs(A2);
            else ans = A1;
        }
    }
    cout << ans << endl;
}
