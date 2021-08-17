#include <iostream>
using namespace std;

bool used[16][16];
int H, W;

int dfs(int a, int b, int i, int j) {

    if(j >= W) i++, j = 0;

    if(i >= H) return 1;

    if(used[i][j]) return dfs(a, b, i, j + 1);

    int res = 0;
    used[i][j] = true;

    if(b > 0) res += dfs(a, b - 1, i, j + 1); // hanjo


    if(a > 0) { // tatami
        if(j + 1 < W && !used[i][j + 1]) {
            used[i][j + 1] = true;
            res += dfs(a - 1, b, i, j + 2); // yoko
            used[i][j + 1] = false;
        }
        if(i + 1 < H) {
            used[i + 1][j] = true;
            res += dfs(a - 1, b, i, j + 1); // tate
            used[i + 1][j] = false;
        }
    }
    used[i][j] = false;

    return res;
}

int main() {
    int A, B;
    cin >> H >> W >> A >> B;

    cout << dfs(A, B, 0, 0) << endl;
}