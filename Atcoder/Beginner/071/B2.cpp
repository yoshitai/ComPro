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
    int N;
    cin >> N;
    vector<int> A(N);
    vector<ll> B;
    rep(i, N) cin >> A[i];
    sort(A.begin(), A.end());
    for (int i = N-1; i >= 0; --i) {
        if (i - 1 >= 0) {
            if (A[i] == A[i-1]) B.push_back(A[i]), i--;
        }
    }
    if (B.size() < 2) cout << 0 << endl;
    else cout << B[0] * B[1] << endl;
}