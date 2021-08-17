#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;

int main() {
    int N,K;
    cin >> N >> K;
    vector<int> R(N);
    rep(i,N) cin >> R[i];
    double ans = 0;
    int p = N-K;
    sort(R.begin(), R.end());
    for(int i = p;i<N;++i) {
        ans = (ans+R[i])/2.0;
    }
    cout << fixed << setprecision(9) << ans << endl;
}
