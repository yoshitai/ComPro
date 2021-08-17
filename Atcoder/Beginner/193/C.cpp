#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

double logbase(double a, double b) {
    return log(a) / log(b);
}

int main() {
    ll N;
    cin >> N;
    set<ll> A;
    for(ll i = 2; i*i <= N; ++i) {
        for(ll j = i*i; j <= N; j*=i) A.insert(j);
    }
    ll ans = 0;
    cout << N - A.size() << endl;
}