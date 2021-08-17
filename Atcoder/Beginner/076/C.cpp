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

    string s, t;
    cin >> s >> t;

    int s_size = s.size();
    int t_size = t.size();

    string ans = "";
    for(int i = 0; i <= s_size - t_size; ++i) {
        string a = s;
        bool ok = true;
        for(int j = 0; j < t_size; ++j) {
            if(t[j] != a[i+j] && a[i+j] != '?') ok = false;
            a[i+j] = t[j];
        }
        if(ok) {
            for(int j = 0; j < s_size; j++) {
                if(a[j] == '?') a[j] = 'a';
            }
            if(ans.empty()) ans = a;
            else chmin(ans, a);
        }
    }

    if(ans.empty()) {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }


    cout << ans << endl;
}