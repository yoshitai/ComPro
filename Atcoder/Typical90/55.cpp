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
const int mod = 1e9+7;

int main() {
    int N, P, Q;
    cin >> N >> P >> Q;

    vector<ll> A(N);
    for(int i = 0; i < N; ++i) cin >> A[i];

    int ans = 0;
    for(int i = 0; i < N; ++i) {
        for(int j = i+1; j < N; ++j) {
            for(int k = j+1; k < N; ++k) {
                for(int l = k+1; l < N; ++l) {
                    for(int m = l+1; m < N; ++m) {
                        ll t = (A[i]*A[j])%P;
                        t = (t * A[k]) % P;
                        t = (t * A[l]) % P;
                        t = (t * A[m]) % P;
                        if(t == Q) ans++;
                    }
                }
            }
        }
    }

    cout << ans << endl;
}