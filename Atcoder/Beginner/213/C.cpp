#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000000;
const double PI = acos(-1.0);

struct point {
    int x;
    int y;
};

int main() {

    int H, W, N;
    cin >> H >> W >> N;
    vector<int> A(N), B(N);
    set<int> sa, sb;
    rep(i, N) {
        cin >> A[i] >> B[i];
        sa.insert(A[i]);
        sb.insert(B[i]);
    }

    vector<point> P(N);
    map<int, int> mx, my;
    int rank = 1;
    for(int e : sa) {
        mx[e] = rank;
        rank++;
    }
    rank = 1;
    for(int e : sb) {
        my[e] = rank;
        rank++;
    }

    for(int i = 0; i < N; ++i) {
        cout << mx[A[i]] << " " << my[B[i]] << endl;
    }
}