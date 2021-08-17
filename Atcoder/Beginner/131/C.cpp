#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
  if(a<b) return a? gcd(a,b%a) : b;
  return b? gcd(b,a%b) : a;
}

int main() {
    ll A,B,C,D;
    cin >> A >> B >> C >> D;
    ll LCM = C*D/gcd(C,D);
    ll c1 = (A-1)/C+(A-1)/D - (A-1)/LCM;
    ll c2 = B/C+B/D - B/LCM;
    ll quantity = B - A + 1;
    ll ans = quantity - (c2 - c1);
    cout << ans << endl;

}