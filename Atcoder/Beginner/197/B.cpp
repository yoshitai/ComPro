#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    int H,W,X,Y;
    cin >> H >> W >> X >> Y;
    vector<string> S(H);
    rep(i, H) cin >> S[i];
    X--, Y--;
    int ans = 1;
    for(int i = 1; Y - i >= 0 && S[X][Y-i] == '.'; ++i) ans++;
    for(int i = 1; Y + i < W && S[X][Y+i] == '.'; ++i) ans++;
    for(int i = 1; X - i >= 0 && S[X-i][Y] == '.'; ++i) ans++;
    for(int i = 1; X + i < H && S[X+i][Y] == '.'; ++i) ans++;
    cout << ans << endl;
}