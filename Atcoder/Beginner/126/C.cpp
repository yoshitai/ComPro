#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

int N,K;
int main(){
    cin >> N >> K;
    double ans=0;
    for (int i = 1; i <= N; i++)
    {
        double a = 1.0 / N;
        int p = i;
        while(p < K) {
            p *= 2;
            a *= 0.5;
        }
        ans += a;
    }
    cout << fixed << setprecision(12) << ans << endl;
}
