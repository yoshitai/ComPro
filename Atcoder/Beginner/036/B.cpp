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

    vector<string> s(N);
    rep(i,N) cin >> s[i];
    char ans[N][N];

    rep(i,N) {
        rep(j,N) {
            ans[j][N-1-i] = s[i][j];
        }
    }
    rep(i,N) {
        rep(j,N) {
            cout << ans[i][j];
        }
        cout << endl;
    }
}