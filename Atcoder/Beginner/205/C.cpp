#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if(C % 2 == 0) {
        A = abs(A);
        B = abs(B);
    }
    if(A < B) cout << '<' << endl;
    else if(A > B) cout << '>' << endl;
    else cout << '=' << endl;

}