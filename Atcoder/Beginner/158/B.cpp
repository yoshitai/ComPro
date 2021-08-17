#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll N,A,B;
    cin >> N >> A >> B;
    ll n = (N/(A+B))*A;
    ll c;
    if(N%(A+B) <= A) c = N%(A+B);
    else c = A;
    ll ans = n+c;
    cout << ans << endl;
}