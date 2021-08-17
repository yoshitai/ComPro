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
    vector<long long> A(N+1, 0), B(N+1), C(N+1, 0);
    for(int i = 1; i <= N; ++i) {
        long long a;
        cin >> a;
        A[a]++;
    }
    for(int i = 1; i <= N; ++i) {
        long long b;
        cin >> b;
        B[i] = b;
    }
    for(int i = 1; i <= N; ++i) {
        long long c;
        cin >> c;
        C[c]++;
    }
    long long ans = 0;
    for(int i = 1; i <= N; ++i) {
        ans += A[B[i]] * C[i];
    }

    cout << ans << endl;
}