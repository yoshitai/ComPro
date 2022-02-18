#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
typedef long long ll;

int main() {

    int Q;
    cin >> Q;

    int N = 1 << 20;
    vector<ll> A(N, -1);
    set<int> S;
    rep(i, N) S.insert(i);

    rep(i, Q) {
        int t;
        ll x;
        cin >> t >> x;
        int h = (int)(x % N);
        if(t == 1) {
            auto it = S.lower_bound(h);
            if(it == S.end()) it = S.begin();
            A[*it] = x;
            S.erase(it);
        } else {
            cout << A[h] << endl;
        }
    }
}