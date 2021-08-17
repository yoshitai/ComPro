#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N,M;
    cin >> N >> M;
    vector<int> C(N+1,0),WC(N+1,0);
    int wa = 0,ac = 0;
    int p;
    string s;
    for (int i = 0; i < M; i++)
    {
        cin >> p >> s;
        if(C[p]) continue;
        if(s == "AC") {
            ++C[p];
            wa += WC[p];
            ++ac;
        }
        else ++WC[p];
    }
    cout << ac << " " << wa << endl;
    
    
}


    
