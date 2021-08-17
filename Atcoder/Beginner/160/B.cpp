#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    int x;
    cin >> x;
    ll ans = 0;
    ans += (x/500)*1000;
    x = x - (x/500)*500;
    ans += (x/5)*5;
    cout << (ll)ans << endl;
}
