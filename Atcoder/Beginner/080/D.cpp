#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#include <cstdio>
using namespace std;

int H, W, N;
int color[100][100];
vector<int> A;

void dfs(int x, int y, int i) {

    if(i > N) return;

    if(A[i] > 0) {
        color[x][y] = i;
        A[i]--;
        if(A[i] == 0) ++i;
    }

    if(y + 1 < W && color[x][y+1] == 0) dfs(x, y + 1, i);
    if(x + 1 < H && color[x+1][y] == 0) dfs(x + 1, y, i);
    if(y - 1 >= 0 && color[x][y-1] == 0) dfs(x, y - 1, i);
    if(x - 1 >= 0 && color[x-1][y] == 0) dfs(x - 1, y, i);
}

int main() {

    cin >> H >> W >> N;

    A.resize(N+1);
    for(int i = 1; i <= N; ++i) cin >> A[i];

    dfs(0, 0, 1);

    for(int i = 0; i < H; ++i){
        for(int j = 0; j < W; ++j) cout << color[i][j] << " ";
        cout << endl;
    }
}