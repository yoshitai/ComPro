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

    string S, T;
    cin >> S >> T;

    auto f = [&](int i, int j) -> string {
        string res = S;
        swap(res[i], res[j]);
        return res;
    };

    bool flag = false;
    for(int i = 0; i < S.size(); ++i) {
        if(i == 0) flag = S == T;
        else {
            if(f(i - 1, i) == T) flag = true;
        }
    }

    cout << (flag ? "Yes" : "No") << endl;
}