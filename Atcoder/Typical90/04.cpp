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
    int H, W;
    cin >> H >> W;
    int A[H][W];
    vector<int> rowSum(H, 0), columnSum(W, 0);
    for(int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            cin >> A[i][j];
            rowSum[i] += A[i][j];
            columnSum[j] += A[i][j];
        }
    }

    for(int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            cout << rowSum[i] + columnSum[j] - A[i][j] << " ";
        }
        cout << endl;
    }


}