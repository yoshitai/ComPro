#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    int N;
    cin >> N;
    ll ans=1,a[N];
    bool f=false;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    ll M = 1e18;
    sort(a,a+N);
    if(a[0] == 0) ans = 0;
    else {
        for(ll n:a){
            M /= n;
        }
        if(M < 1) ans = -1;
        else {
            for(ll n:a){
                ans *= n;
            }
        }
    }
    cout << ans << endl;
    
}
