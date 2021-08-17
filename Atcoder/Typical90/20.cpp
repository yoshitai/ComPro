#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>

using namespace std;

typedef long long ll;

int main() {

    ll a, b, c;
    cin >> a >> b >> c;

    ll C = 1;
    for(int i = 0; i < b; ++i) C *= c;

    cout << (C > a ? "Yes" : "No") << endl;
}