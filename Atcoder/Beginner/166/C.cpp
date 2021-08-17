#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;

int main() {

    int N,M;
    cin >> N >> M;
    int H[N+1];
    for(int i=1;i<=N;++i) cin >> H[i];
    bool ch[N+1];
    for(int i=1;i<=N;++i) ch[i]=true;
    for (int i = 0; i < M; i++)
    {
        int a,b;
        cin >> a >> b;
        if(H[a] <= H[b]) ch[a] = false;
        if(H[a] >= H[b]) ch[b] = false;
    }
    int ans = 0;
    for (int i = 1; i <= N; i++)
    {
        if(ch[i]) ans++;
    }

    cout << ans << endl;
}
