#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){

    int  N,Q;
    cin >> N >> Q;
    ll T[200005];
    for(int i=1,a,b;i<N;i++){ //辺の数：ノード数-1
        cin >> a >> b;
        T[b] = a;
    }
    ll c[200005] = {};
    for(int i=1,p,b;i<=Q;i++) {
        cin >> p >> b;
        c[p] += b;
    }

    for(int i = 1;i<=N;i++) {
        c[i] += c[T[i]]; 
        cout << c[i] << ' ';
    }
    cout << endl;

}
