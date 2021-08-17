#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    int N, K, c = 0, ans = 0;
    cin >> N >> K;
    vector<int> A(N);
    for(int i=0;i<N;i++) cin >> A[i];
    while(c<N) {
        if(!ans) c+=K;
        else c+=K-1;
        ans++;
    }
    cout << ans <<endl;
}
