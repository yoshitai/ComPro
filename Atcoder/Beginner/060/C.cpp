#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
typedef long long ll;

const int mod = 1e9+7;
const ll INF = 200000000000;
const double PI = acos(-1.0);

using namespace std;

int main() {
    int N, T;
    cin >> N >> T;
    vector<int> t(N);
    rep(i, N) cin >> t[i];
    int pt = T, ans = T;
    for(int i = 1; i < N; ++i) {
        if (t[i] < pt) {
            pt = t[i] + T;
        }
        else {
            ans += pt;
            pt = t[i];

        }
    }

}