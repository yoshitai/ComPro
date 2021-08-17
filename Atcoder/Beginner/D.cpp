#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const double pi = (acos(-1));

long double a, b, x;

int main(){

    cin >> a >> b >> x;
    long double theta;
    long double S = x / a;
    if(S >= a*b/2) {
        double  h = 2*(a*b - S) / a;
        theta = atan2(h,a);
    }
    else {
        double w = 2 * S / b;
        theta = atan2(b,w);
    }
    cout << fixed << setprecision(12) << theta * 180 /pi <<endl;
}
