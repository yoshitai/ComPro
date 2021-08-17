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
    int N;
    cin >> N;
    vector<int> P(N);
    rep(i, N) cin >> P[i];
    int ans = 0;
    for(int i = 1; i <= N; ++i) {
        if(P[i-1] == i) {
            if(i < N && P[i] == i+1) i++;
            ans++;
        }
    }
    cout << ans << endl;
}