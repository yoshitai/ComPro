#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int N;
    cin >> N;
    vector<pair<int, int>> M(N);

    for(int i = 0; i < N; ++i) cin >> M[i].second >> M[i].first;

    sort(M.begin(), M.end());

    int ans = 0;
    for(int i = 0; i < N; ++i) {
        int x = M[i].first;
        while(i + 1 < N && M[i+1].second < x) ++i;
        ans++;
    }

    cout << ans << endl;
}