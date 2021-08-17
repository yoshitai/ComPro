#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    int count=0;
    for(int i=0;i<N;i++) {
        cin >> a[i];
        if(a[i]>=3200) count++;
    }

    int ans = 0;
    for(int i=0;i<=7;i++) {
        for(int j=0;j<N;j++) {
            if(a[j]>=400*i && a[j]<400*(i+1)) {
                ans++;
                break;
            }
        }
    }
    cout << max(ans,1) << ' '  << ans+count << endl;
}