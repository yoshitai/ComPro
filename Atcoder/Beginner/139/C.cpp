#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int N;
ll H[100005];

int solve(int p, int ans) {
    if(p >= N) return ans;
    int c = 0;
    for(int i = p;i<N-1;i++) {
        if(H[i] >= H[i+1]) c++;
        else break;
    }
    return solve(p+c+1, max(ans, c));
}

int main() {
    cin >> N;
    for(int i = 0;i<N;i++) cin >> H[i];
    int ans = solve(0,0);
    cout << ans << endl;
}