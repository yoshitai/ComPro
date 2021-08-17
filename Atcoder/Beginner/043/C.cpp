#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;

int main() {
    int N;
    cin >> N;
    int a[N];
    rep(i,N) cin >> a[i];
    ll m = 1 << 30;
    for(int i=-100;i<=100;++i) {
        ll c=0;
        for(int j=0;j<N;++j) {
            c += (a[j]-i)*(a[j]-i);
        }
        if(c < m) {
            m = c;
        }
    }
    cout << m << endl;
    
}
