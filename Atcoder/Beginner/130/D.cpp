#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {

    long long N, K;
    cin >> N >> K;
    vector<long long> a(N);

    for(int i = 0; i < N; ++i) cin >> a[i];

    vector<long long> ac(N+1);
    ac[0] = 0;

    for(int i = 0; i < N; ++i) ac[i+1] = ac[i] + a[i];

    long long ans = 0;
    for(int i = 0; i < N; ++i) {
        ans += ac.end() - lower_bound(ac.begin(), ac.end(), ac[i] + K);
    }

    cout << ans << endl;
}