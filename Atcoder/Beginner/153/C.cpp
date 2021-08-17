#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    int N,K;
    cin >> N >> K;
    vector<ll> H(N);
    rep(i,N) scanf("%d",&H[i]);
    sort(H.begin(),H.end());
    int p = min(N,K);
    ll ans = 0;
    for (int i = 0; i < N-p; i++)
    {
        ans += H[i];
    }
    cout << ans << endl;
}

    
