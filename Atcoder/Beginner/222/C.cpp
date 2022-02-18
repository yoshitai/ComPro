#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000000;
const double PI = acos(-1.0);

int judge(char c1, char c2) {
    if((c1 == 'G' && c2 == 'C') ||
    (c1 == 'C' && c2 == 'P') ||
    (c1 == 'P' && c2 == 'G')) {
        return 1;
    } else if((c2 == 'G' && c1 == 'C') ||
    (c2 == 'C' && c1 == 'P') ||
    (c2 == 'P' && c1 == 'G')) {
        return 2;
    }
    return 3;

}
int main() {

    int N, M;
    cin >> N >> M;
    char A[2*N][M];
    vector<int> m;
    rep(i, 2*N) {
        rep(j, M) {
            cin >> A[i][j];
        }
        m.push_back(i);
    }

    vector<int> count(2 * N, 0);
    for(int i = 0; i < M; ++i) {
        for(int j = 0; j < N; j++) {
            int a = m[j*2], b = m[j*2+1];
            int sw = judge(A[a][i], A[b][i]);
            if(sw == 1) count[a]++;
            else if(sw == 2) count[b]++;
            else {
                // count[a]++;
                // count[b]++;
            }
        }
        vector<int> v;
        for(int j = i+1; j >= 0; --j) {
            for(int k = 0; k < 2*N; ++k) {
                if(count[k] == j) v.push_back(k);
            }
        }
        m = v;
    }
    for(int i = 0; i < 2*N; ++i) cout << m[i] + 1 << endl;
}