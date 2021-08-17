#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){

    int N,M,A;
    cin >> N >> M;
    vector<int> v(N);
    priority_queue<ll> que;
    ll ans =0;
    for(int i=0;i<N;i++) {
         cin >> A;
         que.push(A);
    }
    for(int i = 0;i<M;i++) {
        int m = que.top();
        que.pop();
        que.push(m/2);
    }
    while(!que.empty()){
        ans += que.top();
        que.pop();
    }
    cout << ans << endl;
}
