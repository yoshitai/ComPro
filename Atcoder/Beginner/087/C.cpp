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
    int a[N], b[N], aa[N+1], ab[N+1];
    rep(i,N) cin >> a[i];
    rep(i,N) cin >> b[i];
    aa[0] = 0, ab[0] = 0;
    for(int i = 0; i < N; ++i) {
        aa[i+1] = aa[i] + a[i];
        ab[i+1] = ab[i] + b[i];
    }
    int ans = 0;
    for(int i = 1; i < N+1; ++i) {
        ans = max(ans, aa[i] + ab[N] - ab[i-1]);
    }
    cout << ans << endl;

}