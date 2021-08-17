#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    int N;
    cin >> N;
    vector<int> x(N);
    rep(i,N) cin >> x[i];
    vector<ll> m(N);
    ll ans1 = 0;
    rep(i,N) {
        m[i] = abs(x[i]);
        ans1 += m[i];
    }
    double ans2 = 0;
    rep(i,N) {
        ans2 += m[i] * m[i];
    }
    ans2 = sqrt(ans2);
    int ans3 = *max_element(m.begin(), m.end());
    cout << ans1 << endl;
    cout << fixed << setprecision(14) << ans2 << endl;
    cout << ans3 << endl;
}