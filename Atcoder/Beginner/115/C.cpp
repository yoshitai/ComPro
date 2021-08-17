#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<set>
#include<cstdio>

using namespace std;

using Int= long long;

int main(){
    int n, k;
    cin >> n >> k;
    vector<Int> t(n);
    Int ans=10000000010;
    for(int i=0;i<n;i++) cin>>t[i];
    sort(t.begin(),t.end());
    for(int i=0;i<n-k+1;i++) ans=min(ans,t[i+k-1]-t[i]);
    cout << ans <<endl;
}
