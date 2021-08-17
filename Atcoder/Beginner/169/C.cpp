#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    ll A;
    int a;
    double B,b;
    cin >> A >> B;
    a = (int)B;
    ll ans = A*a;
    ans += (A/10)*((int)(B*10)%10);
    ans += (A%10)*(((int)(B*10)%10)/10.0);
    ans += (A/100)*((int)(B*100)%10);
    ans += (A%100)*(((int)(B*100)%10)/100.0);
    cout << ans << endl;
}
