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
    int N, K;
    cin >> N >> K;

    vector<int> T;
    for(int i = 0; i < N; ++i) {
        int A, B;
        cin >> A >> B;
        T.push_back(B);
        T.push_back(A-B);
    }

    sort(T.begin(), T.end());
    reverse(T.begin(), T.end());

    ll ans = 0;
    for(int i = 0; i < K; ++i) ans += (ll)T[i];

    cout << ans << endl;
}