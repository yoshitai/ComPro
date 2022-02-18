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

    int L[N], R[N];
    rep(i, N) cin >> L[i] >> R[i];

    double ans = 0.0;
    for(int i = 0; i < N; ++i) {
        for(int j = i+1; j < N; ++j) {
            int n = 0;
            for(int k = L[i]; k <= R[i]; ++k) {
                for(int l = L[j]; l < k && l <= R[j]; ++l) {
                    n++;
                }
            }
            int t = (R[i] - L[i] + 1) * (R[j] - L[j] + 1);

            ans += (double) n / t;
        }
    }

    cout << fixed << setprecision(10) << ans << endl;
}