#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;

int main() {
    int N,M;
    cin >> N >> M;
    vector<int> A(M);
    rep(i,M) cin >> A[i];
    ll ac = accumulate(A.begin(), A.end(), 0);
    if(ac > N) cout << -1 << endl;
    else cout << N - ac << endl;
    
}
