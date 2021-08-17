#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;



int main() {
    int N;
    string s;
    cin >> N >> s;
    int R[N+1],G[N+1],B[N+1];
    R[0]=0; G[0]=0; B[0]=0;
    for(int i=0;i<N;++i) {
        if(s[i]=='R') {
            R[i+1] = R[i]+1;
            G[i+1] = G[i];
            B[i+1] = B[i];
        }
        else if(s[i]=='G'){
            R[i+1] = R[i];
            G[i+1] = G[i]+1;
            B[i+1] = B[i];
        }
        else if(s[i]=='B') {
            R[i+1] = R[i];
            G[i+1] = G[i];
            B[i+1] = B[i]+1;
        }
    }
    ll ans = 0;
    ll c = 0;
    for(int i=1;i<N-1;++i) {
        if(s[i]=='R') {
            for(int j=1;i-j>=0 && i+j<N;++j) {
            if((s[i-j]=='G' && s[i+j]=='B') || (s[i-j]=='B' && s[i+j]=='G')) ++c;}
            ans += G[i]*(B[N]-B[i+1]);
            ans += B[i]*(G[N]-G[i+1]);
        }
        if(s[i]=='G') {
            for(int j=1;i-j>=0 && i+j<N;++j) {
            if((s[i-j]=='R' && s[i+j]=='B') || (s[i-j]=='B' && s[i+j]=='R')) ++c;}
            ans += B[i]*(R[N]-R[i+1]);
            ans += R[i]*(B[N]-B[i+1]);
        }
        if(s[i]=='B') {
            for(int j=1;i-j>=0 && i+j<N;++j) {
            if((s[i-j]=='R' && s[i+j]=='G') || (s[i-j]=='G' && s[i+j]=='R')) ++c;}
            ans += G[i]*(R[N]-R[i+1]);
            ans += R[i]*(G[N]-G[i+1]);
        }
    }
    cout << ans - c << endl;
}
