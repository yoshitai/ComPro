#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    
    int n;
    cin >> n;
    int d1[n],d2[n];
    rep(i,n) cin >> d1[i] >> d2[i];
    bool flag = false;
    for(int i = 0; i < n-2; ++i) {
        if(d1[i] == d2[i] && d1[i+1] == d2[i+1] && d1[i+2] == d2[i+2]) flag = true;
    }
    cout << (flag ? "Yes" : "No") << endl;
}