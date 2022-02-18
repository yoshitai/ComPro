#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

int main() {

    int N, M;
    cin >> N >> M;

    dsu d(N);
    vector<int> deg(N, 0);

    rep(i, M) {
        int a, b;
        cin >> a >> b;
        --a, --b;

        if(d.same(a, b)) {
            cout << "No" << endl;
            return 0;
        }

        d.merge(a, b);
        deg[a]++;
        deg[b]++;
    }

    rep(i, N) {
        if(deg[i] > 2) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}