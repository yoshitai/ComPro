#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string S;

ll dfs(int n, ll i, ll c) {
    if(n == S.size()-1) return i+c;
    ll res = 0;
    res += dfs(n+1, S[n+1]-'0', c+i)+dfs(n+1, i*10+S[n+1]-'0', c);
    return res;
}

int main() {
    cin >> S;
    cout << dfs(0,S[0]-'0',0) << endl;
}
