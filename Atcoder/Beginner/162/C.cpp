#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

long long gcb(long long a,long long b){
  if(a<b) return a? gcb(a,b%a) : b;
  return b? gcb(b,a%b) : a;
}

int main() {
    int K;
    ll ans = 0;
    cin >> K;
    for(int i=1;i<=K;++i) {
        for(int j=1;j<=K;++j) {
            for(int k=1;k<=K;++k) ans += gcb(gcb(i,j),k);
        }
    }
    cout << ans << endl;
}
