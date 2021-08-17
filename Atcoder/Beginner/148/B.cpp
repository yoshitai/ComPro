#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0;i<N;i++) cin >> a[i];
    int p=0;
    int k=1,ans = 0;
    bool flag = false;
    while(p < N) {
        for(int i=p;i<N;++i) {
            if(a[i] == k) {
                flag = true;
                p = i+1;
                ++k;
                break;
            }
            ++ans;
        }
        if(!flag) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << ans << endl;
}