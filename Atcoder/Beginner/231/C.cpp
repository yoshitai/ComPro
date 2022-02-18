#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

int main() {

    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);

    rep(i, N) cin >> A[i];

    sort(A.begin(), A.end());

    rep(i, Q) {
        int x;
        cin >> x;
        cout << A.end() - lower_bound(A.begin(), A.end(), x) << endl;
    }
}