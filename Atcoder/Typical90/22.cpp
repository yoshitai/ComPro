#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>

using namespace std;

typedef long long ll;

ll gcd(ll x,ll y){
   return y ? gcd(y, x % y) : x;
}

int main() {

    ll a, b, c;
    cin >> a >> b >> c;

    ll g = gcd(a, b);
    g = gcd(g, c);

    ll t = a + b + c - 3 * g;

    cout << t / g << endl;
}