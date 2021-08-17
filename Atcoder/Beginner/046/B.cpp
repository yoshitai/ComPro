#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, K;
    cin >> N >> K;
    ll ans = K * pow(K-1,N-1);
    cout << ans << endl;
}