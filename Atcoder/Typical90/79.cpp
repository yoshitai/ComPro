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

    int H, W;
    cin >> H >> W;

    int A[H][W], B[H][W];
    rep(i, H) {
        rep(j, W) cin >> A[i][j];
    }
    rep(i, H) {
        rep(j, W) cin >> B[i][j];
    }

    ll ans = 0;
    rep(i, H-1) {
        rep(j, W-1) {
            int delta = B[i][j] - A[i][j];
            A[i+1][j] += delta;
            A[i][j+1] += delta;
            A[i+1][j+1] += delta;
            ans += (ll)abs(delta);
        }
    }

    rep(i, H) {
        if(A[i][W-1] != B[i][W-1]) {
            cout << "No" << endl;
            return 0;
        }
    }
    rep(i, W) {
        if(A[H-1][i] != B[H-1][i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    cout << ans << endl;
}