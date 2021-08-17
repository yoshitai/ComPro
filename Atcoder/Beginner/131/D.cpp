#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

struct Task {
    int start;
    int finish;

    bool operator<( const Task& right ) const {
        return finish < right.finish;
    }
};

int main() {
    int N;
    cin >> N;
    vector<Task> A(N);
    rep(i, N) cin >> A[i].start >> A[i].finish;
    sort(A.begin(), A.end());
    ll sum = 0;
    bool flag = true;
    rep(i, N) {
        sum += A[i].start;
        if (sum > A[i].finish) {
            flag = false;
            break;
        }
    }
    cout << (flag ? "Yes" : "No") << endl;
}