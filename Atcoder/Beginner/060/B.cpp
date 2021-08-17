#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
typedef long long ll;

const int mod = 1e9+7;
const ll INF = 200000000000;
const double PI = acos(-1.0);

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    for(int i = 1; i <=B; ++i) {
        if((A*i)%B == C) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}