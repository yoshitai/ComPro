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
    cin >> N;
    string s;
    cin >> s;
    int Q;
    cin >> Q;
    int T, A, B;
    bool sw = false;
    int cnt = 0;
    for(int i = 0; i < Q; ++i) {
        cin >> T >> A >> B;
        A--, B--;
        string t;
        if(T == 1) {
            if(sw) {
                if(A < N && B < N) {
                    char c = s[N+A];
                    s[N+A] = s[N+B];
                    s[N+B] = c;
                }
                else if(A < N && N <= B) {
                    char c = s[N+A];
                    s[N+A] = s[B-N];
                    s[B-N] = c;
                }
                else {
                    char c = s[A-N];
                    s[A-N] = s[B-N];
                    s[B-N] = c;
                }
            }
            else {
                char c = s[A];
                s[A] = s[B];
                s[B] = c;
            }
        }
        else sw = !sw;
    }
    if(sw) {
        s = s.substr(N, N) + s.substr(0, N);
    }
    cout << s << endl;
}