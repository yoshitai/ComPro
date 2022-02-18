#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const ll INF = 1LL << 60;

struct edge {
    int to;
    ll cost;
    edge(int t, ll c): to(t), cost(c) {}
};

typedef pair<ll, int> P;

int main() {

    int N, M;
    cin >> N >> M;

    vector<edge> G[N+1];

    for(int i = 0; i < M; ++i) {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        G[a].push_back(edge(b, c));
        G[b].push_back(edge(a, c));
    }

    auto f = [=, &G] (int root) -> vector<ll> {
        vector<ll> d(N+1, INF);
        d[root] = 0LL;
        priority_queue<P, vector<P>, greater<P>> queue;
        queue.push(P(0LL, root));

        while(!queue.empty()) {

            P u = queue.top();
            queue.pop();

            int v = u.second;
            for(int i = 0; i < G[v].size(); ++i) {
                edge e = G[v][i];
                if (d[e.to] > d[v] + e.cost) {
                    d[e.to] = d[v] + e.cost;
                    queue.push(P(d[e.to], e.to));
                }
            }
        }

        return d;
    };

    vector<int> dist(N+1);
    vector<ll> dist1 = f(1);
    for(int i = 1; i <= N; ++i) dist[i] = dist1[i];

    vector<ll> distN = f(N);
    for(int i = 1; i <= N; ++i) dist[i] += distN[i];

    for(int i = 1; i <=N; ++i) cout << dist[i] << endl;
}