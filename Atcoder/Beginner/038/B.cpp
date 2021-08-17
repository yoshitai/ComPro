#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    
    int h1,h2,w1,w2;
    cin >> h1 >> w1 >> h2 >> w2;
    bool flag = false;
    if(h1 == h2 || h1 == w2 || h2 == w1 || w1 == w2) flag = true;
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}
