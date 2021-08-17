#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N,K;
    cin >> N >> K;
    vector<int> l(N+1,0);
    int a;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        ++l[a];
    }
    sort(l.begin(),l.end());
    int ans = 0;
    for (int i = 1; i <= N-K; i++)
    {
        ans += l[i];
    }
    cout << ans << endl;
}
