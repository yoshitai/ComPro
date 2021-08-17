#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){

    int N,x[10],y[10],a[9] = {0,1,2,3,4,5,6,7,8};
    cin >> N;
    for (int i = 0; i < N; i++) cin >> x[i] >> y[i];
    double ans = 0;
    int cnt = 0;
    do {
        for (int i = 0; i < N-1; i++) {
            ans += sqrt((x[a[i]]-x[a[i+1]])*(x[a[i]]-x[a[i+1]])+(y[a[i]]-y[a[i+1]])*(y[a[i]]-y[a[i+1]]));
        }
        cnt++;
    } while(next_permutation(a, a + N));
    cout << fixed << setprecision(10) << ans/cnt << endl;
}
