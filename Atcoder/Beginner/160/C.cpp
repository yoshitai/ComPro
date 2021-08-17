#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

int main() {
    int K,N;
    cin >> K >> N;
    vector<int> A(N+2);
    for(int i=1;i<=N;++i) cin >> A[i];
    A[0] = A[N];
    A[N+1] = A[1];
    int ans = 10000000;
    for (int i = 1; i <= N; i++)
    {
        int a;
        if(A[i-1] < A[i]) a = K - (A[i] - A[i-1]);
        else a = A[i-1] - A[i];
        int b;
        if(A[i] < A[i+1]) b = K - (A[i+1]-A[i]);
        else b = A[i] - A[i+1];
        ans = min(ans, min(a,b));
    }
    cout << ans << endl;
    

}
