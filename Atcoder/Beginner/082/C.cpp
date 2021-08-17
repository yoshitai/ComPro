#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    unordered_map<int, int> b;
    int a;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        ++b[a];
    }
    int ans = 0;
    for(auto x:b) {
        if(x.first == x.second) continue;
        else if(x.first - x.second < 0) ans += x.second - x.first;
        else ans += x.second;
    }
    cout << ans << endl;
    
}
