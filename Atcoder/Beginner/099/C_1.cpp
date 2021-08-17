#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int MAX = 100100;

vector<int> memo(MAX, -1);

int solve(int n) {
    if(n == 0) return 0;
    if(memo[n] != -1) return memo[n];

    int res = n;
    for(int i=1;i<=n;i*=6) res = min(res, solve(n-i)+1);

    for(int i=9;i<=n;i*=9) res = min(res, solve(n-i)+1);

    return memo[n]=res;
}
int main() {
    int N;
    cin >> N;
    cout << solve(N) << endl;
}
