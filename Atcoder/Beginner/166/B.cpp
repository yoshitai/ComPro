#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;

int main() {
    int N,K;
    cin >> N >> K;
    vector<bool> ch(N+1,false);
    for (int i = 0; i < K; i++)
    {
        int d;
        cin >> d;
        for (int j = 0; j < d; j++)
        {
            int a;
            cin >> a;
            ch[a] = true;
        }
        
    }
    int ans = 0;
    for (int i = 1; i <=N; i++)
    {
        if(!ch[i]) ans++;
    }
    
    cout << ans << endl;
    
}
