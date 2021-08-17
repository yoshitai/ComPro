#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

ll comb[61][61];

int main() {

    ll A, B, K;
    cin >> A >> B >> K;


    comb[0][0] = 1;
    rep(i, 60) {
        rep(j, i + 1) {
            comb[i + 1][j] += comb[i][j];
            comb[i + 1][j + 1] += comb[i][j];
        }
    }

    string ans = "";
    while(A + B > 0) {
        if(A == 0) {
            ans += 'b';
            B--;
            continue;
        }

        ll x = comb[A + B - 1][A - 1];
        if(x < K) {
            K -= x;
            ans += 'b';
            B--;
        } else {
            ans += 'a';
            A--;
        }
    }

    cout << ans << endl;
}