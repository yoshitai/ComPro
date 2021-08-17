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
    vector<int> A(N), B(N);
    for(int i = 0; i < N; ++i) cin >> A[i];
    for(int i = 0; i < N; ++i) cin >> B[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    ll ans = 0;
    for(int i = 0; i < N; ++i) ans += abs(A[i] - B[i]);

    cout << ans << endl;
}