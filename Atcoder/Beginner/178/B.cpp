#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll ans = a * c;
    ans = max(ans, a*d);
    ans = max(ans, b*c);
    ans = max(ans, b*d);
    cout << ans << endl;

}