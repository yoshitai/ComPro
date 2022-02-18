#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 200000000;
const double PI = acos(-1.0);

struct UnionFind {
    vector<int> par; // 親
    vector<int> rank; // 木の深さ

    UnionFind() {}
    UnionFind(int n) : rank(n, 0), par(n, 0) {iota(par.begin(), par.end(), 0);}

    // 木の根を求める
    int find(int x) {
        return (x == par[x] ? x : par[x] = find(par[x]));
    }

    // xとyの属する集合を併合
    void unite(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) return;

        if (rank[x] < rank[y]) par[x] = y;
        else {
            par[y] = x;
            if (rank[x] == rank[y]) rank[x]++;
        }
    }

    // xとyが同じ集合に属するか否か
    bool same(int x, int y) {
        return find(x) == find(y);
    }
};


int main() {
    int H, W, Q;
    cin >> H >> W >> Q;

    UnionFind UF(H*W);

    for(int i = 1; i <= Q; ++i) {
        int t;
        cin >> t;
        if(t == 1) {
            int x, y;
            cin >> x >> y;

        } else {

        }
    }
}