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

    string s;
    cin >> s;
    int k;
    cin >> k;

    const int N = s.size();
    int ac[N+1];
    ac[0] = 0;
    rep(i, N) {
        if(s[i] == '.') ac[i+1] = ac[i] + 1;
        else ac[i+1] = ac[i];
    }

    int l = 0, r = N+5;

    while(r - l > 1) {
        int mid = (l + r) / 2;
        bool ok = false;
        for(int i = 0; i + mid <= N; ++i) {
            if(ac[i+mid] - ac[i] <= k) {
                ok = true;
                break;
            }
        }

        if(ok) l = mid;
        else r = mid;
    }

    // if(ac[N] == 0) l = N;
    cout << l << endl;
}