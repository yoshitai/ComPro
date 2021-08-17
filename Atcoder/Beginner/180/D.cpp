#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

ll X, Y, A, B;
ll ans = 0;

int main() {
    
    cin >> X >> Y >> A >> B;
    while(X*A <= X+B && X*A < Y) {
        X *= A;
        ans++;
    }
    ll a = Y - X - 1;
    ans += a / B;
    cout << ans << endl;
}