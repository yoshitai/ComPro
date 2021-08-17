#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    int N;
    cin >> N;
    string s;
    s.
    map<string, int> m;
    for(int i=0;i<N;i++) {
        cin >> s;
        m[s]++;
    }
    int mx = 0;
    for(auto x: m) mx = max(mx, x.second);
    for(auto x:m) {
        if(x.second == mx) cout << x.first << endl;
    }
    
}