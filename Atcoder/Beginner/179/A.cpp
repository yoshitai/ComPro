#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    string s;
    cin >> s;
    if(s[s.size()-1] == 's') s += "es";
    else s += "s";
    cout << s << endl;
}