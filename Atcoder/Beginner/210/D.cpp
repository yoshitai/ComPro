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

    ll N, A, X, Y;
    cin >> N >> A >> X >> Y;
    ll ans = 0;

    if(N > A) {
        ans = X * A + Y * (N - A);
    } else {
        ans = X * N;
    }

    cout << ans << endl;
}