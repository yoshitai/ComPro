#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

int main() {

    int N;
    cin >> N;
    vector<double> A(N), B(N);
    rep(i, N) cin >> A[i] >> B[i];


    vector<double> t(N + 1);
    double total = 0.0;
    rep(i, N) {
        t[i] = A[i] / B[i];
        total += t[i];
    }
    total /= 2.0;

    double ans = 0.0, a = 0.0;
    for(int i = 0; i < N; ++i) {
        if(a + t[i] < total) {
            a += t[i];
            ans += A[i];
        }
        else {
            ans += (total - a) * B[i];
            break;
        }
    }

    cout << fixed << setprecision(12) << ans << endl;
}