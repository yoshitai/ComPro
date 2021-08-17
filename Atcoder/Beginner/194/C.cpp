#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];
    vector<ll> ac(N+1);
    ac[0] = 0;
    rep(i, N) ac[i + 1] = ac[i] + A[i];
    ll sum = 0;
    for(int i = 0; i < N; ++i) {
        sum +=  (N - 1) * A[i] * A[i];
        sum += -2 * A[i] * (ac[N] - ac[i+1]);
    }
    cout << sum << endl;
}