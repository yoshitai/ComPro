#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

int main() {

    ll N;
    cin >> N;

    string ans = "";
    while(N > 0LL) {
        if(N % 2 == 0) {
            N /= 2;
            ans = "B" + ans;
        }
        else {
            N--;
            ans = "A" + ans;
        }
    }

    cout << ans << endl;
    return 0;
}