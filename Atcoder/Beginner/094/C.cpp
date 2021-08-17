#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;

int main() {
    int N;
    cin >> N;
    int X[N];
    vector<int> s(N);
    rep(i,N){ cin >> X[i]; s[i] = X[i]; }
    sort(s.begin(),s.end());
    int r = s[N/2], l = s[N/2-1];
    if(r == l) {
        while(N--) cout << r << endl;
    }
    else {
        for(int i=0;i<N;++i) {
            if(X[i] > l) {
                cout << l << endl;
            }
            else cout << r << endl;
        }
    }

}
