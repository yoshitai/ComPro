#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int getDigit(ll n) {
    int res = 0;
    while(n) {
        n /= 10LL;
        res++;
    }
    return res;
}

int main() {
    ll N;
    cin >> N;
    int d = getDigit(N);
    if(d & 1) {
        N = 1;
        for(int i = 0; i < d - 1; ++i) N *= 10LL;
    }
    ll a = N;
    for(int i = 0; i < d/2; ++i) a /= 10LL;
    ll b = a;
    for(int i = 0; i < d/2; ++i) b *= 10LL;
    if(N >= b+a) cout << a << endl;
    else cout << a - 1 << endl;
}