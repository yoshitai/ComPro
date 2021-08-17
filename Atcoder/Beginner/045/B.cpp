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
    string A,B,C;
    cin >> A >> B >> C;
    queue<char> a, b, c;
    for(char ch : A) a.push(ch);
    for(char ch : B) b.push(ch);
    for(char ch : C) c.push(ch);
    char sw = 'a', ans;
    while(true) {
        if(sw == 'a') {
            if(a.empty()) {
                ans = 'A';
                break;
            }
            sw = a.front();
            a.pop();
        } else if(sw == 'b') {
            if(b.empty()) {
                ans = 'B';
                break;
            }
            sw = b.front();
            b.pop();
        } else {
            if(c.empty()) {
                ans = 'C';
                break;
            }
            sw = c.front();
            c.pop();
        }
    }
    cout << ans << endl;
}