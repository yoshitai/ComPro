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

    int N;
    cin >> N;
    vector<ll> S(N), T(N);
    rep(i, N) cin >> S[i];
    rep(i, N) cin >> T[i];

    vector<ll> bt(N+1);
    bt[0] = 0LL;
    rep(i, N) bt[i+1] = bt[i] + S[i];

    vector<ll> s(N);
    s[0] = T[0];
    for(int i = 0; i < N; ++i) chmin(s[0], bt[N] - bt[i] + T[i]);

    for(int i = 1; i < N; ++i) s[i] = min(T[i], s[i-1] + S[i-1]);

    rep(i, N) cout << s[i] << endl;
}