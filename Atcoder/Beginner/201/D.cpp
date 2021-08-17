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
    int dp[H+1][W+1];
    dp[H][W] = 0;

    for(int i = H; i >= 1; --i) {
        for(int j = W; j >= 1; --j) {
            if(i == H && j == W) continue;
            if((i+j) % 2 == 0)  { // Takahashi
                if(i + 1 > H) dp[i][j] = dp[i][j+1] + f(G[i][j+1]);
                else if(j + 1 > W) dp[i][j] = dp[i+1][j] + f(G[i+1][j]);
                else dp[i][j] = max(dp[i][j+1] + f(G[i][j+1]), dp[i+1][j] + f(G[i+1][j]));
            } else { // Aoki
                if(i + 1 > H) dp[i][j] = dp[i][j+1] - f(G[i][j+1]);
                else if(j + 1 > W) dp[i][j] = dp[i+1][j] - f(G[i+1][j]);
                else dp[i][j] = min(dp[i][j+1] - f(G[i][j+1]), dp[i+1][j] - f(G[i+1][j]));
            }
        }
    }

    if(dp[1][1] > 0) cout << "Takahashi" << endl;
    else if(dp[1][1] < 0) cout << "Aoki" << endl;
    else cout << "Draw" << endl;
}