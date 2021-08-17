#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int MAX = 101000;

int main() {
    int X,ans=0;
    cin >> X;
    for(int i=1;i<=X;++i) {
        if((i*(i+1)/2) >= X){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}
