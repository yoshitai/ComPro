#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;

int main() {
    int N;
    cin >> N;
    vector<int> A(N+1, 0);
    int a;
    for(int i=2;i<=N;i++) {
        cin >> a;
        A[a]++;
    }
    for(int i=1;i<=N;++i) {
        cout << A[i] << endl;
    }
}
