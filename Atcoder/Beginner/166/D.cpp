#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;

int main() {

    ll x;
    cin >> x;
    bool flag = false;
    int a,b;
    for(ll i=1000;i>=-1000;--i){
        for(ll j=1000;j>=-1000;--j) {
            if(pow(i,5)-pow(j,5) == x) {
                cout << i << " " << j << endl;
                return 0;
                
            }
        }
    }
}

