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
    int A, B;
    cin >> A >> B;
    if(A+B >= 15 && B >= 8) cout << 1 << endl;
    else if(A+B >= 10 && B >= 3) cout << 2 << endl;
    else if(A + B >= 3) cout << 3 << endl;
    else cout << 4 << endl;
}