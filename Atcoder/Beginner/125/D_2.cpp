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
    int N;
    cin >> N;

    vector<long long> A(N);
    for(int i = 0; i < N; ++i) cin >> A[i];

    long long dp[N][2];
    dp[0][0] = A[0], dp[0][1] = -A[0];

    for(int i = 1; i < N; ++i) {
        dp[i][0] = max(dp[i-1][0] + A[i], dp[i-1][1] - A[i]);
        dp[i][1] = max(dp[i-1][0] - A[i], dp[i-1][1] + A[i]);
    }

    cout << dp[N-1][0] << endl;

}