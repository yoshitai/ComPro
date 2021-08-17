#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#include <cstdio>
using namespace std;

typedef long long ll;

const int INF = 2000000000;

int main() {

    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; ++i) cin >> A[i];

    int Q;
    cin >> Q;
    vector<int> B(Q);
    for(int i = 0; i < Q; ++i) cin >> B[i];


    sort(A.begin(), A.end());
    A.push_back(INF);

    for(int i = 0; i < Q; ++i) {
        int j = lower_bound(A.begin(), A.end(), B[i]) - A.begin();
        int ans;
        if(j == N) ans = abs(B[i] - A[j-1]);
        else {
            ans = abs(B[i] - A[j]);
            if(j - 1 >= 0) ans = min(ans, abs(B[i] - A[j-1]));
        }
        cout << ans << endl;
    }
}