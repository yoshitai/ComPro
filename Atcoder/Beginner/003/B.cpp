#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    int n;
    cin >> n;
    string s;
    map<string, int> l;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        l[s]++;
    }
    string ans;
    int m=0;
    for(auto x: l) {
        if(x.second > m) {
            m = x.second;
            ans = x.first;
        }
    }
    cout << ans << endl;
    
}
