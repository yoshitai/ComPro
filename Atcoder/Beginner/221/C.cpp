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

    string S;
    cin >> S;
    int N = (int)S.size();
    ll ans = 0LL;
    sort(S.begin(), S.end());
    do
    {
        for(int i = 1; i < N; ++i) {
            string t1 = S.substr(0, i);
            string t2 = S.substr(i);
            if(t1[0] == '0' || t2[0] == '0') continue;
            chmax(ans, stoll(t1) * stoll(t2));
        }
    } while (next_permutation(S.begin(), S.end()));

    cout << ans << endl;
}