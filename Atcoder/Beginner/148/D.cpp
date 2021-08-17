#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int p = 1, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == p) ++p;
        else ++ans;
    }
    if(ans == n) cout << -1 << endl;
    else cout << ans << endl;
}
