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
    int N;
    cin >> N;

    vector<ll> C(N);
    for(int i = 0; i < N; ++i) {
        cin >> C[i];
    }

    sort(C.begin(), C.end());
    ll ans = 1;
    for(int i = 0; i < N; ++i) {
        ans = (ans * (C[i]-i)) % mod;
    }

    cout << ans << endl;
}