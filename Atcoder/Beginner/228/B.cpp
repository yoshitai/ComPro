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

    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    rep(i, N) {
        cin >> A[i];
        A[i]--;
    }
    X--;

    vector<bool> a(N, false);
    int ans = 0;
    while(!a[X]) {
        a[X] = true;
        ans++;
        X = A[X];
    }

    cout << ans << endl;
}