#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int INF = 2000000000;

int main() {

    int N, D;
    cin >> N >> D;
    vector<pair<int, int>> W(N);

    rep(i, N) {
        int l, r;
        cin >> l >> r;
        W[i].first = r;
        W[i].second = l;
    }

    sort(W.begin(), W.end());

    int ans = 0;
    rep(i, N) {
        int end = W[i].first;
        while(i + 1 < N && end + D - 1 >= W[i+1].second) {
            i++;
        }
        ans++;
    }

    cout << ans << endl;
}