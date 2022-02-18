#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const string T = "oxxoxxoxxoxxo";

bool f(int N, string s) {

    for(int i = 0; i + N - 1 < T.size(); ++i) {
        string t = T.substr(i, N);
        if(s == t) return true;
    }

    return false;
}

int main() {

    string s;
    cin >> s;
    const int N = (int)s.size();

    if(f(N, s)) cout << "Yes" << endl;
    else cout << "No" << endl;
}