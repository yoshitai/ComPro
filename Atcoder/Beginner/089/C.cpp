#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int MAX = 101000;

int main() {
    int N;
    cin >> N;
    string s;
    vector<int> c(5,0);
    while(N--) {
        cin >> s;
        if(s[0] == 'M') c[0]++;
        else if(s[0] == 'A') c[1]++;
        else if(s[0] == 'R') c[2]++;
        else if(s[0] == 'C') c[3]++;
        else if(s[0] == 'H') c[4]++;
    }

    ll ans = 0;
    for(int i=0;i<5;++i) {
        for(int j=i+1;j<5;++j) {
            for(int k=j+1;k<5;++k) ans += (ll)c[i]*c[j]*c[k];
        }
    }
    cout << ans << endl;
}
