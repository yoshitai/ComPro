#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    int a,b;
    cin >> a >> b;
    int ans = 0;
    int c = 1;
    while(c < b) {
        c = c + a - 1;
        ans++;
    }
    cout << ans << endl;
}