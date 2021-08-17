#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;

int main() {
    ll a,b,c,k;
    cin >> a >> b >> c >> k;
    if(a >= k) cout << k << endl;
    else if(a+b >= k) cout << a << endl;
    else cout << a - (k-b-a) << endl;
}
