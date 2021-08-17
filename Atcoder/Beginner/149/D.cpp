#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    int N, K, R, S, P;
    cin >> N >> K >> R >> S >> P;
    string T;
    cin >> T;
    auto score = [&](int i) {
        if (T[i] == 'r') return P;
        else if (T[i] == 's') return R;
        else return S;
    };
    int sum = 0;
    for(int i = 0; i < K; ++i) {
        bool sw = false;
        for(int j = i; j < N; j += K) {
            if(j >= K && T[j-K] == T[j] && sw) sw = false;
            else sum += score(j), sw = true;
        }
    }
    cout << sum << endl;
}