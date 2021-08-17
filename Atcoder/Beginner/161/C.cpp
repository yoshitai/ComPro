#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main() {
    ll N,K;
    cin >> N >> K;
    cout << min(N%K, K-(N%K)) << endl;
}
