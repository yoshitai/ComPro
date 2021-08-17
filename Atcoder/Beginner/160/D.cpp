#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#include <cstdio>
using namespace std;

vector<vector<int>> G;
int N;

vector<int> bfs(int v) {
    queue<int> q;
    vector<int> cnt(N, -1);
    cnt[v] = 0;
    q.push(v);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for(int i : G[u]) {
            if(cnt[i] != -1) continue;
            cnt[i] = cnt[u] + 1;
            q.push(i);
        }
    }

    return cnt;
}

int main() {
    int X, Y;
    cin >> N >> X >> Y;
    X--, Y--;

    G.resize(N);

    for(int i = 0; i < N-1; ++i) {
        G[i].push_back(i+1);
        G[i+1].push_back(i);
    }
    G[X].push_back(Y);
    G[Y].push_back(X);

    vector<int> ans(N, 0);
    for(int i = 0; i < N; ++i) {
        for(int n : bfs(i)) ans[n]++;
    }

    for(int i = 1; i < N; ++i) cout << ans[i] / 2 << endl;
}