#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    
    int N, a, b, K;
    cin >> N >> a >> b >> K;
    set<int> s;
    bool flag = false;
    s.insert(a), s.insert(b);
    int p;
    for(int i = 0; i < K; i++) {
        cin >> p;
        if(s.find(p) != s.end()) flag = true;
        s.insert(p);
    }
    cout << (flag ? "NO" : "YES") << endl;
}