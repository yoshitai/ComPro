#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 200000000;
const double PI = acos(-1.0);

int main() {

    int N, K;
    cin >> N >> K;

    vector<int> count(N+1, 0);

    for(int i = 2; i <= N; ++i) {
        if(count[i]) continue;
        for(int j = i; j <= N; j += i) {
            count[j] += 1;
        }
    }

    int ans = 0;
    for(int i = 2; i <= N; ++i) {
        if(count[i] >= K) ans++;
    }

    cout << ans << endl;
}