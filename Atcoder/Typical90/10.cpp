#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> sumA(N+1, 0), sumB(N+1, 0);
    for(int i = 1; i <= N; ++i) {
        int c, p;
        cin >> c >> p;
        if(c == 1) {
            sumA[i] = sumA[i-1] + p;
            sumB[i] = sumB[i-1];
        }
        else {
            sumA[i] = sumA[i-1];
            sumB[i] = sumB[i-1] + p;
        }
    }

    int Q;
    cin >> Q;
    for(int i = 0; i < Q; ++i) {
        int l, r;
        cin >> l >> r;
        cout << sumA[r] - sumA[l-1] << " " << sumB[r] - sumB[l-1] << endl;
    }
}