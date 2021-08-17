#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;

int main() {
    string s;
    cin >> s;
    s = s+'+';
    int ans = 0,p = 0;
    for(int i=1;i<s.size();i+=2) {
        if(s[i]=='+') {
            bool flag = false;
            for(int j=p;j<i;j+=2) {
                if(s[j]=='0') flag = true;
            }
            p = i+1;
            if(!flag) ans++;
        }
    }
    cout << ans << endl;
}
