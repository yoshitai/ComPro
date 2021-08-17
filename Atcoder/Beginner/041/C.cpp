#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> v(N+1);
    int h;
    for(int i=1;i<=N;++i) {
        cin >> h;
        v[i].first = h;
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    for (int i = N; i >0; --i)
    {
        cout << v[i].second << endl;
    }
    
}
