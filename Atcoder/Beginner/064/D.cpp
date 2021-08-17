#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;
const int INF = 200000000;

int main() {
    int N;
    string s;
    cin >> N >> s;
    int r = 0, l = 0;
    rep(i, N) {
        if(s[i] == '(') r++;
        else {
            r--;
            if(r < 0) l = max(l, -r);
        }
    }

    rep(i, l) s = "(" + s;
    N += l;

    int a = 0;
    rep(i, N) {
        if(s[i] == '(') a++;
        else a--;
    }

    rep(i, a) s += ")";

    cout << s << endl;
}