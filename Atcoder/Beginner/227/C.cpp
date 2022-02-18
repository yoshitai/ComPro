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

    ll N;
    cin >> N;

    ll a = 0;
    for(ll i = 1; i <= 10000; ++i) {
        ll tmp = i * i * i;
        if(tmp <= N) a = i;
    }

    ll ans = 0LL;
    for(ll i = a; i >= 1; --i) {
        if(N % i != 0) continue;
        ll c = N / i;
        for(ll j = c; j >= a; --j) {
        }
    }
    cout << a << endl;
}