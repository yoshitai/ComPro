#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    
    int N,T;
    cin >> N >> T;
    int A[N];
    rep(i,N) cin >> A[i];
    ll ans = 0;
    rep(i,N-1) {
        ans += min(A[i+1]-A[i], T);
    }
    ans += T;
    cout << ans << endl;
}