#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){

    int N,L[3000],s;
    cin >> N;
    vector<int> v(N);
    int ans =0;
    for(int i=0;i<N;i++) {
         cin >> L[i];
         v[i]=L[i];
    }
    sort(v.begin(),v.end());
    for(int i = 0;i<N;i++) {
        for(int j = i+1;j<N;j++) {
            auto it = lower_bound(v.begin(),v.end(),v[i]+v[j]);
            s = distance(v.begin(),it)-1;
            ans += s - j;
        }
    }
    cout << ans << endl;
}
