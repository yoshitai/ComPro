#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    vector<int> H(N);
    rep(i,N) cin >> H[i];
    int k = 0;
    bool flag = true;
    for (int i = 0; i < N; i++)
    {
        k = max(k,H[i]);
        if(k-1 > H[i]) flag = false;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}


    
