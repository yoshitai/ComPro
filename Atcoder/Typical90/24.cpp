#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

typedef long long ll;


int main() {

    ll N, K;
    cin >> N >> K;

    vector<int> A(N), B(N);
    for(int i = 0; i < N; ++i) cin >> A[i];

    for(int i = 0; i < N; ++i) cin >> B[i];

    ll d = 0;
    for(int i = 0; i < N; ++i) d += abs(A[i] - B[i]);

    if(d <= K && (d + K) % 2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}