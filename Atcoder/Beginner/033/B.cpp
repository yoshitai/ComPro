#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    
    int N;
    cin >> N;
    vector<string> s(N);
    vector<int> p(N);
    rep(i,N) cin >> s[i] >> p[i];
    int num = 0;
    string name;
    for(int i = 0; i < N; i++) {
        if(p[i] > num) {
            num = p[i];
            name = s[i];
        }
    }
    double rate = (double) num / accumulate(p.begin(), p.end(), 0);
    if(rate > 0.5) cout << name << endl;
    else cout << "atcoder" << endl;
}