#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

int main(){
    ll N;
    cin >> N;
    ll a=1;
    for(ll i=2;i*i<=N;i++) {
        if(N%i == 0) a = i;
    }
    cout << a+(N/a)-2 << endl;

}


    
