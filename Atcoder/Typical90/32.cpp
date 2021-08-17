#include <iostream>
#include <algorithm>
#include <cmath>
#include <set>
#include <vector>

using namespace std;

typedef long long ll;

bool check(int v, vector<int> g) {
    for(int e : g) {
        if(v == e) return true;
    }
    return false;
}

int main() {

    int N;
    cin >> N;

    int A[N+1][N+1];
    for(int i = 1; i <= N; ++i)
        for(int j = 1; j <= N; ++j) cin >> A[i][j];

    int M;
    cin >> M;

    vector<vector<int>> G(N + 1);
    for(int i = 0; i < M; ++i) {
        int x, y;
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }

    vector<int> p;
    for(int i = 1; i <= N; ++i) p.push_back(i);

    int ans = 10000000;
    do
    {
        int total = 0;
        bool flag = true;
        for(int i = 0; i < N; ++i) {
            if(i + 1 < N && check(p[i+1], G[p[i]])) flag = false;
            total += A[p[i]][i+1];
        }
        if(flag) ans = min(ans, total);
    } while (next_permutation(p.begin(), p.end()));

    if(ans == 10000000) cout << -1 << endl;
    else cout << ans << endl;
}