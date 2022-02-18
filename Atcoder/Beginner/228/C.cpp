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

    int N, K;
    cin >> N >> K;
    int P[N][3];

    vector<int> s, t;
    rep(i, N) {
        int p = 0;
        rep(j, 3) {
            cin >> P[i][j];
            p += P[i][j];
        }
        s.push_back(p);
        t.push_back(p);
    }

    sort(s.begin(), s.end());

    rep(i, N) {
        int pos = s.end() - upper_bound(s.begin(), s.end(), t[i] + 300);
        if(pos+1 <= K) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

}