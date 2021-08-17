#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    
    int n;
    cin >> n;
    int L[n];
    rep(i,n) cin >> L[i];
    ll ans = 0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            for(int k=j+1;k<n;k++) {
                if(L[i] == L[j] || L[i] == L[k] || L[j] == L[k]) continue;
                if(L[i]+L[j] > L[k] && L[i]+L[k] > L[j] && L[j]+L[k] > L[i]) ans++;
            }
        }
    }
    cout << ans << endl;
}