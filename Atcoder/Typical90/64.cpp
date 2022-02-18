#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 200000000;
const double PI = acos(-1.0);

int main() {

    ll N, Q;
    cin >> N >> Q;

    vector<ll> A(N);
    rep(i, N) cin >> A[i];

    vector<ll> d(N);
    ll x = 0;
    for (int i = 1; i < N; ++i) {
        d[i-1] = A[i] - A[i-1];
        x += abs(d[i-1]);
    }

    rep(i, Q) {
        int L, R;
        ll V;
        cin >> L >> R >> V;
        L--, R--;
        if (L > 0) {
            x -= abs(d[L-1]);
            d[L-1] += V;
            x += abs(d[L-1]);
        } 
        if (R < N -1) {
            x -= abs(d[R]);
            d[R] -= V;
            x += abs(d[R]);
        }
        cout << x << endl;
    }

}