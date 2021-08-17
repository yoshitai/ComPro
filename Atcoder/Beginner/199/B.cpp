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
    cin >> N;
    vector<int> A(N), B(N);
    int max_a = 0,min_b = 10000;
    rep(i, N) {
        cin >> A[i];
        chmax(max_a, A[i]);
    }
    rep(i, N) {
        cin >> B[i];
        chmin(min_b, B[i]);
    }
    cout << max(min_b - max_a + 1, 0) << endl;
}
