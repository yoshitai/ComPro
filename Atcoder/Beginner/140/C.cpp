#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    int N;
    cin >> N;
    int b[N-1];
    int c[N];
    ll ans = 0;
    for(int i=0;i<N-1;i++) cin >> b[i];
    c[0] = b[0]; c[N-1] = b[N-2];
    for(int i=1;i<N-1;i++) {
        c[i]=min(b[i-1],b[i]);
    }
    for(int i=0;i<N;i++) ans += c[i];
    cout << ans << endl;

}