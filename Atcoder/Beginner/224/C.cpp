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
    vector<pair<ll, ll>> P(N);
    rep(i, N) {
        cin >> P[i].first >> P[i].second;
    }

    int ans = 0;
    for(int i = 0; i < N; ++i) {
        for(int j = i+1; j < N; ++j) {
            for(int k = j+1; k < N; ++k) {
                ll x1 = P[i].first, y1 = P[i].second;
                ll x2 = P[j].first, y2 = P[j].second;
                ll x3 = P[k].first, y3 = P[k].second;
                ll a = (x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3);
                if(a != 0) ans++;
            }
        }
    }

    cout << ans << endl;
}