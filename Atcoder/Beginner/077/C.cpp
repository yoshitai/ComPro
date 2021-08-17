#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    ll A[n+1],B[n],C[n+1],ans=0;
    for(int i=0;i<n;i++) cin >> A[i];
    for(int i=0;i<n;i++) cin >> B[i];
    for(int i=0;i<n;i++) cin >> C[i];
    A[n] = 1 << 30;
    C[n] = 1 << 30;
    sort(A,A+n+1); sort(C,C+n+1);
    for(int i=0;i<n;i++) {
        ll l = lower_bound(A,A+n+1,B[i])-A;
        ll r = n-(lower_bound(C,C+n+1,B[i]+1)-C);
        ans += l*r;
        
    }
    cout << ans << endl;
}