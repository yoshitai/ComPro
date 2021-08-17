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

    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, M;
    cin >> N >> M;

    vector<long long> A(N);
    for(int i = 0; i < N; ++i) cin >> A[i];

    vector<pair<long long, long long>> P;
    for(int i = 0; i < M; ++i) {
        long long b, c;
        cin >> b >> c;
        P.push_back(make_pair(c, b));
    }

    sort(A.begin(), A.end());
    sort(P.begin(), P.end());

    long long ans = 0;
    for(int i = 0; i < N; ++i) {
        if(P.empty() || P.back().first <= A[i]) {
            ans += A[i];
            continue;
        }
        ans += P.back().first;
        P.back().second--;
        if(P.back().second == 0) P.pop_back();
    }

    cout << ans << endl;
}