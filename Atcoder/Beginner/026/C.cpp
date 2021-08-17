#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

int N;
vector<vector<int>> B(21);

ll func(int n) {
    if(B[n].empty()){
        return 1;
    }
    ll sum = 0;
    ll maxv = 0;
    ll minv = 100000000000;
    for(int x:B[n]){
        ll c = func(x);
        maxv = max(maxv,c);
        minv = min(minv,c);
    }
    return maxv+minv+1;
}
int main(){
    cin >> N ;
    int b;
    for (int i = 2; i <= N; i++)
    {
        cin >> b;
        B[b].push_back(i);
    }
    ll ans = func(1);
    cout << ans << endl;
}
