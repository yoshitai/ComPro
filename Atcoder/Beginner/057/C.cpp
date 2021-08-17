#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){

    ll N;
    cin >> N;
    int m = 100;
    for(ll i=1;i*i<=N;i++){
        if(N%i) continue;
        m = min(m, (int)max(to_string(i).size(), to_string(N/i).size()));
    }
    cout << m << endl;
}
