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

int main() {

    int N, Q;
    cin >> N >> Q;

    vector<int> A(N);
    for(int i = 0; i < N; ++i) cin >> A[i];

    int p = 0;
    for(int i = 0; i < Q; ++i) {
        int T, x, y;
        cin >> T >> x >> y;

        if(T == 1) swap(A[(x-1-p+N)%N], A[(y-1-p+N)%N]);
        else if(T == 2) p = (p + 1) % N;
        else cout << A[(x-1-p+N)%N] << endl;
    }
}