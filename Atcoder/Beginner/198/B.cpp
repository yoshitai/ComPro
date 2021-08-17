#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; ++i) {
        string t = s;
        reverse(t.begin(), t.end());
        if(s == t) {
            cout << "Yes" << endl;
            return 0;
        }
        s = "0" + s;
    }
    cout << "No" << endl;
}