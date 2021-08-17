#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    
	string s,t;
    cin >> s >> t;
    int ans = 0;
    for(int i=0;i<s.size();++i) {
        if(s[i] != t[i]) ans++;
    }
    cout << ans << endl;
}
