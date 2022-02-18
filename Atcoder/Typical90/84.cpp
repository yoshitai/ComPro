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

    int N;
    string S;
    cin >> N >> S;

    vector<int> v;

    for(int i = 0; i < N; ++i) {
        int c = 1;
        while(i+1 < N && S[i] == S[i+1]) {
            i++;
            c++;
        }
        v.push_back(c);
    }

    ll ans = 0;
    int length = (int)v.size(), sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += v[i];
        ans += (ll)v[i] * (N - sum);
    }

    cout << ans << endl;
}