#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

/**
 * left: 
 * right: n
 * */
int main() {
    int max = 1000000000;
    ll A,B;
    ll X;
    cin >> A >> B >> X;
    int ans=0;
    ll n = A*max+B*10;
    if(n <= X) ans = max;
    else {
        int left = 0, right = max,mid;
        ll a;
        while(left+1 < right) {
            mid = (left+right)/2;
            int d = to_string(mid).size();
            a = A*mid+B*d;
            if(X >= a) {
                left = mid;
            }
            else if(X < a) {
                right = mid;
            }
        }
        ans = right-1;
    }
    
    cout << ans << endl;
}
