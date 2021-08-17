#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    vector<int> a(N);
    ll c = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        c += a[i];
    }
    ll ans = 2500000000,tmp = 0;
    for (int i = 0; i < N-1; i++)
    {
        c -= a[i];
        tmp += a[i];
        ans = min(ans, abs(c-tmp));
    }
    cout << ans << endl;
}
