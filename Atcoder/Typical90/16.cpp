#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#include <cstdio>
using namespace std;

typedef long long ll;

int main() {

    ll A, B, C, N;
    cin >> N >> A >> B >> C;

    ll ans = 10000;
    for(int i = 0; i  <= 9999; ++i) {
        for(int j = 0; j + i <= 9999; ++j) {
            ll c = N - i * A - j * B;
            if(c >= 0 && c % C == 0) ans = min(ans, i+j+c/C);
        }
    }

    cout << ans << endl;
}