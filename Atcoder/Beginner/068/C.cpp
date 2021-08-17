#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N,M;
    cin >> N >> M;
    vector<bool> A(N,false),B(N,false);
    int a,b;
    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;
        if(a == 1) A[b]=true;
        if(b == N) B[a]=true;
    }
    for (int i = 1; i < N; i++)
    {
        if(A[i] && B[i]) {
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }
    cout << "IMPOSSIBLE" << endl;
}
