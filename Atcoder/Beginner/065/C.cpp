#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;

int main() {
    int N,M,a,b;
    cin >> N >> M;
    ll ans=1;
    if(abs(M-N) > 1) ans = 0;
    else if(M == N) {
        for(int i=N;i>=2;--i) ans = ans*i%mod;
        for(int i=M;i>=2;--i) ans = ans*i%mod;
        ans = ans*2%mod;
    }
    else {
        if(N >= M) {
            a = N;
            b = M;
        }
        else {
            a = M;
            b = N;
        }
        for(int i=a;i>=2;--i) ans = ans*i%mod;
        for(int i=b;i>=2;--i) ans = ans*i%mod;
    }
    cout << ans << endl;

}
