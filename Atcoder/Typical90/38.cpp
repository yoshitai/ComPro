#include <iostream>
#include <algorithm>
#include <cmath>
#include <set>
#include <vector>

using namespace std;

typedef long long ll;

ll gcd(ll x,ll y){
   return y ? gcd(y, x % y) : x;
}

ll const POW18 = 1000000000000000000LL;

int main() {

    ll A, B;
    cin >> A >> B;

    ll a = A / gcd(A, B);
    if(a > POW18 / B) cout << "Large" << endl;
    else cout << a * B << endl;

}