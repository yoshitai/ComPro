#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000000;
const double PI = acos(-1.0);

int main() {

    int N;
    cin >> N;
    vector<int> A(N), B(N);
    vector<pair<int, int>> v;
    rep(i, N) {
        cin >> A[i] >> B[i];
        v.push_back(make_pair(A[i], 1));
        v.push_back(make_pair(A[i] + B[i], -1));
    }

    sort(v.begin(), v.end());

    vector<int> C(N+1, 0);

    int count = 0;
    for(int i = 0; i < v.size() - 1; ++i) {
        count += v[i].second;
        C[count] += v[i+1].first - v[i].first;
    }

    for(int i = 1; i <= N; ++i) cout << C[i] << " ";
    cout << endl;
}