#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    int N, S, T;
    cin >> N >> S >> T;
    int W,a;
    cin >> W;
    int c = W;
    int ans = 0;
    if(c >= S && c <= T) ans++;
    for(int i = 2; i <= N; i++) {
    cin >> a;
        c += a;
        if(c >= S && c <= T) ans++;
    }
    cout << ans << endl;
}