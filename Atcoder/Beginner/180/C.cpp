#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    
    ll N;
    cin >> N;
    vector<ll> ans;
    for(ll i = 1; i * i <= N; i++) {
        if(N%i == 0) {
            ans.push_back(i);
            if(i * i != N) ans.push_back(N/i);
        }
    }
    sort(ans.begin(), ans.end());
    for(ll i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
}