#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    int N;
    cin >> N;
    vector<int> x(N);
    for(int i=0;i<N;i++) cin >> x[i];
    sort(x.begin(), x.end());
    int first=x[0];
    int end = x[x.size()-1];
    ll ans = 100000000000;
    for(int i=first;i<=end;i++){
    ll n = 0;
    for(int j=0;j<N;j++) {
        n += pow(x[j]-i,2);
    }
        ans = min(ans,n);
    }
    cout << ans << endl;

}