#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;

int main() {
    int a,b,H,M;
    double pi = acos(-1);
    cin >> a >> b >> H >> M;
    double bdig = 6*M;
    double adig = 30*H+30*(M/60.0);
    double dig = min(360-abs(adig-bdig),abs(adig-bdig));
    double ans = a*a+b*b-(2.0*a*b*cos(pi*dig/180.0));
    cout << fixed << setprecision(12) << sqrt(ans) << endl;
}
