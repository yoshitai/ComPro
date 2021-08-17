#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    
    int x;
    cin >> x;
    int ans;
    for(int i=1;i<=200;++i) {
        if(x == i*i*i*i) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}
