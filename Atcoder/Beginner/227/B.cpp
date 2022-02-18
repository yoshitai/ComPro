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
    vector<int> S(N);
    rep(i, N) cin >> S[i];
    set<int> s;

    for(int i = 1; i <= 500; ++i) {
        for(int j = 1; j <= 500; ++j) {
            int n = 4 * i * j + 3 * (i + j);
            s.insert(n);
        }
    }

    int ans = 0;
    rep(i, N) {
        if(s.find(S[i]) == s.end()) ans++;
    }

    cout << ans << endl;
}