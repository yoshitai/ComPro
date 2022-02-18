#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000000;
const double PI = acos(-1.0);

struct Point {
    ll start;
    ll end;
};

int main() {

    ll N, A, B, P, Q, R, S;
    cin >> N >> A >> B;
    cin >> P >> Q >> R >> S;

    const ll minX = max(1 - A, 1 - B), maxX = min(N - A, N - B);
    const ll minY = max(1 - A, B - N), maxY = min(N - A, B - 1);
    Point X1, Y1, X2, Y2;
    X1.start = A + minX, X1.end = A + maxX;
    Y1.start = B + minX, Y1.end = B + maxX;
    X2.start = A + minY, X2.end = A + maxY;
    Y2.start = B - minY, Y2.end = B - maxY;

    char ans[Q-P+1][S-R+1];

    for(int i = 0; i < Q-P+1; ++i) {
        for(int j = 0; j < S-R+1; ++j) {

            if(X1.start <= i + P && X1.end >= i + P) {
                ll d = i + P - X1.start;
                ll g = Y1.start + d;
                if(j + R == g) {
                    ans[i][j] = '#';
                    continue;
                }
            }

            if(X2.start <= i + P && X2.end >= i + P) {
                ll d = i + P - X2.start;
                ll g = Y2.start - d;
                if(j + R == g) {
                    ans[i][j] = '#';
                    continue;
                }
            }

            ans[i][j] = '.';
        }
    }

    for(int i = 0; i < Q-P+1; ++i) {
        for(int j = 0; j < S-R+1; ++j) {
            cout << ans[i][j];
        }
        cout << endl;
    }
}