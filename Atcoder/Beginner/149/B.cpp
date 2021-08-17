#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    ll a,b,k;
    cin >> a >> b >> k;
    ll c = k - a;
    if(c >= 0) {
        a = 0;
        if(c-b >= 0) b = 0;
        else b = b-c;
    }
    else a = a - k;
    cout << a << ' ' << b <<endl;

}