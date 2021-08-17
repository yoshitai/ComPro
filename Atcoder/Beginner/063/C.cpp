#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    vector<int> s(100);
    cin >> n;
    for(int i=0;i<n;i++) cin >> s[i];
    int c = accumulate(s.begin(), s.end(),0);
    int ans=0;
    if(c%10 != 0) {
        cout << c << endl;
        return 0;
    }
    for(int i=0;i<n;i++) {
        if((c-s[i])%10 == 0) continue;
        ans = max(ans, c-s[i]);
    }
    cout << ans << endl;
}