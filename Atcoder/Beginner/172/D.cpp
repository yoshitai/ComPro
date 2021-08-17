#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    
	int N;
    cin >> N;
    int *count;
    count = (int *)malloc(10000000 * sizeof(int));
    ll ans = 0;
    for(ll i=1;i<=N;++i) {
        for(int j=i;j<=10000000;j+=i) count[j]++;
        ans += i*count[i];
    }
    free(count);
    cout << ans << endl;
}
