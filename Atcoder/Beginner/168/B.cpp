#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;

int main() {
    int k;
    string s;
    cin >> k >> s;
    if(s.size() > k) {
        string tem = s.substr(0,k) + "...";
        cout << tem << endl;
    }
    else cout << s << endl;

}
