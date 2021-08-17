#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {

    double sx,sy,gx,gy;
    cin >> sx >> sy >> gx >> gy;
    cout << fixed << setprecision(10) << (sx*gy + sy*gx) / (sy + gy) << endl;

}