#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int MAX = 101000;


int main() {
    int N;
    cin >> N;
    vector<int> dp(MAX,-1);
    dp[0]=0;
    queue<int> q;
    q.push(0);

    while(!q.empty()) {
        int v = q.front();
        q.pop();
        
        for(int i=1;v+i<=N;i*=6) {
            if(dp[v+i] == -1) {
                dp[v+i] = dp[v]+1;
                q.push(v+i);
            }
        }

        for(int i=9;v+i<=N;i*=9) {
            if(dp[v+i] == -1) {
                dp[v+i] = dp[v] + 1;
                q.push(v+i);
            }
        }
    }
    cout << dp[N] << endl;
}
