#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#include <cstdio>
using namespace std;

int f(char space) {
    return space == '+' ? 1 : -1;
}

int main() {

    int H, W;
    cin >> H >> W;
    char G[H+1][W+1];
    for(int i = 1; i <= H; ++i)
        for(int j = 1; j <= W; ++j) cin >> G[i][j];
    // その地点以降取得できる点数の最大値
    int dp[H+1][W+1];
    dp[H][W] = 0;

    for(int i = H; i >= 1; --i) {
        for(int j = W; j >= 1; --j) {
            if(i == H && j == W) continue;
            dp[i][j] = -1e9;
            // 相手の取得可能な点数を反転させる -dp[i][j]
            if(i + 1 <= H) dp[i][j] = max(dp[i][j], f(G[i+1][j]) - dp[i+1][j]);
            if(j + 1 <= W) dp[i][j] = max(dp[i][j], f(G[i][j+1]) - dp[i][j+1]);
        }
    }

    if(dp[1][1] > 0) cout << "Takahashi" << endl;
    else if(dp[1][1] < 0) cout << "Aoki" << endl;
    else cout << "Draw" << endl;
}