#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll c[200005];

int main(){

    int N,Q;
    cin >> N >> Q;
    vector< vector<int> > T;
    T.resize(N);
    for(int i=1,a,b;i<N;i++){ //辺の数：ノード数-1
        cin >> a >> b;
        a--; b--;
        T[a].push_back(b);
        T[b].push_back(a);
    }

    for(int i=1,p,x;i<=Q;i++) {
        cin >> p >> x;
        p--;
        c[p] += x;
    }

    queue<int> q;
    int vis[N]{};
    vis[0] = 1;
    q.push(0);
    while(!q.empty()) {
        int n = q.front();
        q.pop();
        for(int i:T[n]) {
            if(vis[i] == 1) continue;
            vis[i] = 1;
            c[i] += c[n];
            q.push(i);
        }
    }
    for(int i=0;i<N;i++) {
        cout << c[i] << ' ';
    }

    cout<<endl;
}
