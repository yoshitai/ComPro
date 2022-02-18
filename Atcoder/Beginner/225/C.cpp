#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000000;
const double PI = acos(-1.0);

bool check(vector<vector<int>> &B, int N, int M) {
    for(int i = 0; i < M - 1; ++i) {
        if(B[0][i+1] - B[0][i] != 1 || B[0][i] % 7 == 0) return false;
    }

    for(int i = 0; i < M; ++i) {
        for(int j = 0; j < N - 1; ++j) {
            if(B[j+1][i] - B[j][i] != 7) return false;
        }
    }

    return true;
}

int main() {

    int N, M;
    cin >> N >> M;
    vector<vector<int>> B(N, vector<int>(M));
    rep(i, N) {
        rep(j, M) {
            cin >> B[i][j];
        }
    }

    if(check(B, N, M)) cout << "Yes" << endl;
    else cout << "No" << endl;
}