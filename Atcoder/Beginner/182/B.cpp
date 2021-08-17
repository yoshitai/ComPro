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
    int A[N];
    rep(i, N) cin >> A[i];
    int maxValue = 0, ans;
    for(int i = 2; i <= 1000; ++i) {
        int c = 0;
        for(int j = 0; j < N; ++j) {
            if(A[j] % i == 0) c++;
        }
        if(maxValue < c) {
            maxValue = c;
            ans = i;
        }
    }
    cout << ans << endl;
}