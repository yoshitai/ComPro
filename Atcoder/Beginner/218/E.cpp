#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000000;
const double PI = acos(-1.0);

vector<bool> used;

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

// 辺の定義
struct Edge {
    int id;
    int u;
    int v;
    long long cost;
};
bool comp_e(const Edge &e1, const Edge &e2) { return e1.cost < e2.cost; } // 辺を直接比較するための関数

struct Kruskal {
    UnionFind uft;
    long long sum;  // 最小全域木の重みの総和
    vector<Edge> edges;
    int V;
    Kruskal(const vector<Edge> &edges_, int V_) : edges(edges_), V(V_) { init(); }
    void init() {
        sort(edges.begin(), edges.end(), comp_e); // 辺の重みでソート
        uft = UnionFind(V);
        sum = 0;
        for (auto e : edges) {
            if (!uft.same(e.u, e.v)) { // 閉路にならなければ加える
                uft.unite(e.u, e.v);
                sum += e.cost;
                used[e.id] = true;
            }
        }
    }
};

int main() {

    ll N, M;
    cin >> N >> M;
    used.resize(M, false);
    vector<Edge> edges(M);
    rep(i, M) {
        int a, b, c;
        cin >> a >> b >> c;
        a--, b--;
        edges[i] = {i, a, b, c};
    }

    Kruskal krs(edges, N);
    ll ans = 0LL;
    for(Edge e : edges) {
        if(!used[e.id] && e.cost >= 0) {
            ans += e.cost;
        }
    }

    cout << ans << endl;
}