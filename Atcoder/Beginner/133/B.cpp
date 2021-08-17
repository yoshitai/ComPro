#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    int N,D,X[10][10];
    cin >> N >> D;
    for(int i=0;i<N;++i) 
        for(int j=0;j<D;++j) cin >> X[i][j];
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            ll c = 0;
            for (int k = 0; k < D; k++)
            {
                c += (X[i][k]-X[j][k])*(X[i][k]-X[j][k]);
            }
            bool flag = false;
            // sqrt(c)が整数どうかの判定
            for(int k=1;k*k<=c;k++) {
                if(k*k == c) flag = true;
            }
            if(flag) ++ans;
        }
        
    }
    cout << ans << endl;
}
