#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i,N) cin >> A[i];
    sort(A.begin(), A.end());
    int ans = A[N-1];
    for(int i = N-2; i >= 0; i--) {
        if(ans > A[i]) {
            ans = A[i];
            break;
        }
    }
    cout << ans << endl;
}