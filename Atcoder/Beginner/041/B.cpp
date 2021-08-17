#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod = 1e9+7;

int main() {
    ll A,B,C;
    cin >> A >> B >> C;
    cout << A * B % mod * C % mod << endl;

}