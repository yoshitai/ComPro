#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main() {
    int N;
    cin >> N;
    ll ans = 0;
    for(int i=1;i<=N;++i) {
        if(i%3 == 0 || i%5 == 0) continue;
        else ans += i; 
    }
    cout << ans << endl;
}
