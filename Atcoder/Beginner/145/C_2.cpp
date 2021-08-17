#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;
    int x[N],y[N],v[9] = {0,1,2,3,4,5,6,7,8};
    for(int i=0;i<N;i++) cin >> x[i] >> y[i];
    double ans = 0;
    int c = 0;
    do
    {
        for(int i=0;i<N-1;i++) ans += sqrt(pow(x[v[i+1]]-x[v[i]], 2)+pow(y[v[i+1]]-y[v[i]],2));
        c++;
    } while (next_permutation(v,v+N));
    cout << fixed << setprecision(10) <<ans / c << endl;
}