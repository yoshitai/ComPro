#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const ll mod = 1e9+7;
const int INF = 200000000;
const double PI = acos(-1.0);

int main() {

    int N;
    cin >> N;

    vector<ll> A(N);
    rep(i, N) cin >> A[i];

    vector<ll> sum(2*N+1);
    sum[0] = 0;
    for(int i = 1; i <= N; ++i) sum[i] = sum[i-1] + A[i-1]; 
    for(int i = 1; i <= N; ++i) sum[N+i] = sum[N+i-1] + A[i-1];

    if (sum[N] % 10LL != 0LL) {
        cout << "No" << endl;
        return 0;
    }

    const ll p = sum[N] / 10LL;
    for(int i = 0; i < N; ++i) {

        ll v = *lower_bound(sum.begin(), sum.end(), sum[i] + p);
        if (v == sum[i] + p) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}