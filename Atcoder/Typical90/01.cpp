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

    int N, L, K;
    cin >> N >> L >> K;

    vector<int> A(N);
    rep(i, N) cin >> A[i];

    auto f = [&](int x) -> bool {
        int cnt = 0, pre = 0;
        for(int i = 0; i < N; ++i) {
            int l = 0;
            if(A[i] - pre >= x && L - A[i] >= x) {
                cnt++;
                pre = A[i];
            }
        }

        return cnt >= K;
    };

    int left = 0, right = L + 1;
    while (right - left > 1) {
        
        int mid = (left + right) / 2;
        if(f(mid)) left = mid;
        else right = mid;
    }

    cout << left << endl;
}