#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int gcd(int x,int y){
    return y?gcd(y,x%y):x;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];
    sort(A.begin(), A.end());
    int ans = A[N-1];
    for(int i = 0; i < N-1; ++i) {
        chmin(ans, gcd(A[i+1], A[i]));
    }
    cout << ans << endl;
}