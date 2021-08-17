#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool f[100005];

int main(){

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int ind = 0, ans = 0;
    while(true) {
        if(!f[ind]){
            f[ind] = true;
            ind = a[ind]-1;
            ans++;
        } else {
            ans = -1;
            break;
        }
        if(ind == 1) break;
    }
    cout << ans << endl;
}
