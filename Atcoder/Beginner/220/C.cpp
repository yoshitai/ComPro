#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000000;
const double PI = acos(-1.0);

int main() {

    ll N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];

    ll X;
    cin >> X;

    ll v[N+1];
    v[0] = 0LL;
    rep(i, N) v[i+1] = v[i] + A[i];

    ll p = X / v[N];
    ll sum = v[N] * p;
    ll ans = p * N;
    rep(i, N) {
        sum += A[i];
        ans++;
        if(sum > X) {
            cout << ans << endl;
            return 0;
        }
    }
}