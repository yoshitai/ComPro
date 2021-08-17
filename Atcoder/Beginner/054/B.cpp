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

    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, M;
    cin >> N >> M;

    char A[N][N], B[M][M];

    for(int i = 0; i < N; ++i)
        for(int j = 0; j < N; ++j) cin >> A[i][j];

    for(int i = 0; i < M; ++i)
        for(int j = 0; j < M; ++j) cin >> B[i][j];

    bool f = false;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            bool ok = true;
            for(int k = 0; k < M; ++k) {
                for(int l = 0; l < M; ++l) {
                    if(i+k >= N || j+l >= N || B[k][l] != A[i+k][j+l]) {
                        ok = false;
                        break;
                    }
                }
            }
            if(ok) f = true;
        }
    }

    cout << (f ? "Yes" : "No") << endl;
}