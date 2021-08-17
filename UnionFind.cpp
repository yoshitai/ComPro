#include<bits/stdc++.h>
using namespace std;

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