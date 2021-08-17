#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    string S;
    cin >> S;
    vector<char> a;
    for(char c : S) {
        if(c == '1') a.push_back('1');
        else if(c == '0') a.push_back('0');
        else {
            if(a.empty()) continue;
            a.pop_back();
        }
    }
    for(char c : a) cout << c;
    cout << endl;
}