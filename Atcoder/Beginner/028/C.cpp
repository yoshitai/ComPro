#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;

int main() {
    int a,b,c,d,e,ans;
    cin >> a >> b >> c >> d >> e;
    if(e+b+c >= e+d+a) ans = e+b+c;
    else ans = e+d+a;
    cout << ans << endl;
}
