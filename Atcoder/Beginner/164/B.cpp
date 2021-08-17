#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int f = (c+b-1) / b;
    int f2 = (a+d-1) / d;
    if(f <= f2) cout << "Yes" << endl;
    else cout << "No" << endl;
}
