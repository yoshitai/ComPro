#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    int N;
    cin >> N;
    vector<int> t(N);
    for(int i=0;i<N;i++) cin >> t[i];
    ll sum = accumulate(t.begin(), t.end(),0);
    int M;
    cin >> M;
    int p,x;
    for(int i=0;i<M;i++) {
        cin >> p >> x;
        cout << sum - t[p-1] + x << endl;
    }
}