#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    int N, L;
    cin >> N >> L;
    vector<string> S(N);
    rep(i, N) cin >> S[i];
    sort(S.begin(), S.end());
    string ans = "";
    for(string s : S) {
        ans += s;
    }
    cout << ans << endl;
}