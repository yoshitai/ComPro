#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 200000000;
const double PI = acos(-1.0);

int main() {

    int N;
    string s;
    cin >> N >> s;

    for(int i = 0; i < (int)s.size(); ++i) {
        if(s[i] == '1') {
            if(i % 2 == 0) cout << "Takahashi" << endl;
            else cout << "Aoki" << endl;
            return 0;
        }
    }
}