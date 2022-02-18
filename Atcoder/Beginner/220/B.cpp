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

    int K;
    string A, B;
    cin >> K >> A >> B;

    auto convert = [&](string s) -> ll {
        int n = 1;
        ll res = 0;
        for(int i = s.size()-1; i >= 0; --i) {
            res += (ll)(s[i] - '0') * n;
            n *= K;
        }

        return res;
    };

    cout << convert(A) * convert(B) << endl;
}