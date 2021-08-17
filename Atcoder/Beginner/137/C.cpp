#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    int N;
    ll ans = 0;
    cin >> N;
    unordered_map<string, int> m(N);
    string s;
    for(int i=0;i<N;i++) {
        cin >> s;
        sort(s.begin(), s.end());
        ans += m[s];
        m[s]++;
    }
    cout << ans << endl;
}