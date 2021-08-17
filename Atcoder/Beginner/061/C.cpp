#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;

int main() {
    int N;
    ll K;
    cin >> N >> K;
    vector<pair<int, int>> s(N);
    ll ac[N+1];
    for(int i=0;i<N;++i) cin >> s[i].first >> s[i].second;
    sort(s.begin(), s.end());
    ac[0] = 0;
    for(int i=1;i<=N;++i) {
        ac[i] = ac[i-1]+s[i-1].second;
    }
    int ans;
    for(int i=1;i<=N;++i) {
        if(K <= ac[i]) {
            ans = s[i-1].first;
            break; 
        }
    }
    cout << ans << endl;
}
