#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = numeric_limits<int>::max();
const double PI = acos(-1.0);

struct edge {
    int to;
    int cost;
    edge(int t, int c): to(t), cost(c) {}
};

typedef pair<int, int> P;

int main() {
    int N, M;
    cin >> N >> M;

    vector<edge> G[N];

    for(int i = 0; i < M; ++i) {
        int u, v, c;
        cin >> u >> v >> c;
        G[u].push_back(edge(v, c));
    }

    vector<int> d(N, INF);
    d[0] = 0;
    vector<bool> done(N, false);
    priority_queue<P, vector<P>, greater<P>> queue;
    queue.push(P(0, 0));

    while(!queue.empty()) {

        P u = queue.top();
        queue.pop();

        if(done[u.second]) continue;

        done[u.second] = true;

        int v = u.second;
        for(int i = 0; i < G[v].size(); ++i) {
            edge e = G[v][i];
            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                queue.push(P(d[e.to], e.to));
            }
        }
    }

    cout << d[N-1] << endl;
}