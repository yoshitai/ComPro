#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const ll INF = 1LL << 60;
const double PI = acos(-1.0);

vector<ll> T;
vector<vector<int>> A;
bool visited[300000];
ll dfs(int i) {

    if(visited[i]) return 0LL;

    ll res = 0LL;
    res += T[i];
    for(int a : A[i]) res += dfs(a);

    visited[i] = true;
    return res;
}

int main() {

    int N;
    cin >> N;

    T.resize(N);
    A.resize(N);
    rep(i, N) {
        int k;
        cin >> T[i] >> k;
        for(int j = 0; j < k; ++j) {
            int a;
            cin >> a;
            --a;
            A[i].push_back(a);
        }
    }

    cout << dfs(N-1) << endl;

}