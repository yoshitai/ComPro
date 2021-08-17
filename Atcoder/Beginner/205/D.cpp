#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;
const ll INF = 1000000000010000000;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<ll> A(N), P;
    rep(i, N) cin >> A[i];
    map<ll, ll> m;
    for(int i = 0; i < N; ++i) {
        for(int j = i; j + 1 < N && A[j]+1LL == A[j+1]; ++j) ++i;
        ll p = (ll)A[i] - i;
        P.push_back(p);
        m[p] = (ll)i + 1;
    }
    P.push_back(INF);

    for(int i = 0; i < Q; ++i) {
        ll K;
        cin >> K;
        auto v = upper_bound(P.begin(), P.end(), K);
        if(K < P[0]) {
            cout << K << endl;
        } else {
            cout << K + m[*(v-1)] << endl;
        }
    }
}