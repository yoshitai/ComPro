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
    vector<pair<double, double>> V(N);
    rep(i, N) {
        int t;
        cin >> t >> V[i].first >> V[i].second;
        if(t == 2) V[i].second -= 0.1;
        if(t == 3) V[i].first += 0.1;
        if(t == 4) {
            V[i].second -= 0.1;
            V[i].first += 0.1;
        }
    }

    sort(V.begin(), V.end());
    int ans = 0;
    for(int i = 0; i < N; ++i) {
        for(int j = i+1; j < N; ++j) {
            if(V[i].second >= V[j].first) {
                ans++;
            }
        }
    }

    cout << ans << endl;
}