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
    int N, K;
    cin >> N >> K;
    vector<int> p(N);
    rep(i, N) cin >> p[i];
    vector<int> ac(N+1);
    ac[0] = 0;
    rep(i, N) ac[i+1] = ac[i] + p[i];
    int w, val = 0;
    for(int i = K; i <= N; ++i) {
        int t = ac[i] - ac[i-K];
        if(val < t) {
            val = t;
            w = i - 1;
        }
    }
    double ans = 0.0;
    for(int i = 0; i < K; ++i) ans += (p[w-i] + 1) / 2.0;
    cout << fixed << setprecision(12) << ans << endl;
}