#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);


int main(){

    int H,W;
    cin >> H >> W;
    vector<string> S(H);
    char c[H][W];
    rep(i, H) cin >> S[i];
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            int cnt = 0;
            for (int k = max(i-1, 0); k <= min(i+1, H-1); ++k) {
                for (int l = max(j-1, 0); l <= min(j+1, W-1); ++l) {
                    if(S[k][l] == '#') cnt++;
                }
            }
            if(S[i][j] == '#') c[i][j] = '#';
            else c[i][j] = '0' + cnt;
        }
    }
    for (int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            cout << c[i][j];
        }
        cout << endl;
    }
}
