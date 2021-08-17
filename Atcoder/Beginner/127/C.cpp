#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n,m;
    cin >> n >> m;
    int L=1,R=n;
    int l,r;
    while(m--) {
        cin >> l >> r;
        L = max(L, l);
        R = min(R,r);
    }
    cout << max(R-L+1, 0) << endl;
}
