#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
int N,M,Q;
int a[55],b[55],c[55],d[55];

ll dfs(vector<int> &A) {
    if(A.size() == N) {
        ll ac = 0;
        for(int i=0;i<Q;++i) {
            if(A[b[i]]-A[a[i]] == c[i]) ac += d[i];
        }
        return ac;
    }
    ll res = 0;
    int prev = (A.empty() ? 1:A.back());
    for(int i=prev;i<=M;++i) {
        A.push_back(i);
        res = max(res, dfs(A));
        A.pop_back();
    }
    return res;
}

int main() {
    cin >> N >> M >> Q;
    for (int i = 0; i < Q; i++)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        --a[i]; --b[i];
    }
    vector<int> A;
    cout << dfs(A) << endl;
}
