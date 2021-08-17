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

    int N;
    cin >> N;

    vector<ll> a(46, 0), b(46, 0), c(46, 0);
    for(int i = 0; i < N; ++i) {
        int A;
        cin >> A;
        a[A%46] += 1LL;
    }

    for(int i = 0; i < N; ++i) {
        int B;
        cin >> B;
        b[B%46] += 1LL;
    }

    for(int i = 0; i < N; ++i) {
        int C;
        cin >> C;
        c[C%46] += 1LL;
    }

    ll ans = 0;
    for(int i = 0; i < 46; ++i) {
        for(int j = 0; j < 46; ++j) {
            for(int k = 0; k < 46; ++k) {
                if((i+j+k) % 46 == 0) {
                    ans += a[i] * b[j] * c[k];
                }
            }
        }
    }

    cout << ans << endl;
}