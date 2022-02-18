#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000000;
const double PI = acos(-1.0);

string f(int n) {

    if(n >= 42) n++;
    string s = to_string(n);
    if(s.size() == 1) s = "00" + s;
    else s = "0" + s;

    return "AGC" + s;
}

int main() {

    int N;
    cin >> N;

    cout << f(N) << endl;

}