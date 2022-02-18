#include<bits/stdc++.h>
using namespace std;

/*
グリッド操作処理まとめ
*/

// xの長さ左方向にグリッドを移動する
vector<string> shiftX(int N, int x, vector<string> S) {
    for(int i = 0; i < N; ++i) {
        for(int j = x; j < N; ++j) {
            char c = S[i][j];
            S[i][j] = '.';
            S[i][j-x] = c;
        }
    }
    return S;
}

// yの長さ上方向にグリッドを移動する
vector<string> shiftY(int N, int y, vector<string> S) {
    for(int i = y; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            char c = S[i][j];
            S[i][j] = '.';
            S[i-y][j] = c;
        }
    }
    return S;
}

// グリッド左端からグリッド中の図までの最短距離
int calX(int N, vector<string> S) {

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            if(S[j][i] == '#') {
                return i;
            }
        }
    }
    return 0;
}

// グリッド上端からグリッド中の図までの最短距離
int calY(int N, vector<string> S) {

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            if(S[i][j] == '#') {
                return i;
            }
        }
    }
    return 0;
}

// 2次元グリッドを90度回転する
vector<string> rot90(int N, vector<string> S) {
    vector<string> G(N, string(N, '?'));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            G[i][j] = S[N - j - 1][i];
        }
    }
    return G;
}