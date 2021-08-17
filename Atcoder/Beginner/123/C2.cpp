#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const ll INF = 10000000000000000;
const double PI = acos(-1.0);

int main() {
    ll N;
    cin >> N;
    vector<ll> A(5);
    ll Min = INF;
    ll mp;
    rep(i, 5) {
        cin >> A[i];
        if(Min > A[i]) {
            Min = A[i];
            mp = i;
        }
    }
    ll sum = mp + (N + Min - 1) / Min + (5 - mp - 1); // --> (N + Min - 1) / Min + 4
    cout << sum << endl;
}
