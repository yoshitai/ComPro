#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

struct Point {
    int x;
    int y;
};

int main() {
    int N, M;
    cin >> N >> M;
    vector<Point> a(N), b(M);
    rep(i, N) cin >> a[i].x >> a[i].y;
    rep(i, M) cin >> b[i].x >> b[i].y;
    rep(i, N) {
        int res = INT_MAX, ans;
        int px = a[i].x, py = a[i].y;
        rep(j, M) {
            int d = abs(px-b[j].x)+abs(py-b[j].y);
            if(res > d) {
                res = d;
                ans = j+1;
            }
        }
        cout << ans << endl;
    }
}