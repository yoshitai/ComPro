#include<bits/stdc++.h>
using namespace std;

struct UnionFind {
    vector<int> par; // 親
    vector<int> rank; // 木の深さ
    vector<int> siz;

    UnionFind() {}
    UnionFind(int n) : rank(n, 0), par(n, 0), siz(n, 1) {iota(par.begin(), par.end(), 0);}

    // 木の根を求める
    int root(int x) {
        if (par[x]==-1) return x; // x が根の場合は x を返す
        else return par[x] = root(par[x]); // 経路圧縮
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

    int size(int x) {
        return
    }
};