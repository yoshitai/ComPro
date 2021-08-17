#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;

int main() {
    int r,c;
    cin >> r >> c;
    int sy,sx,gy,gx;
    cin >> sy >> sx >> gy >> gx;
    int G[r][c];
    char ch;
    for(int i=0;i<r;++i) {
        for(int j=0;j<c;++j) {
            cin >> ch;
            if(ch == '#') G[i][j] = -2;
            else G[i][j] = -1;
        }
    }
    queue<int> qx,qy;
    int moveX[4] = {1,0,-1,0}, moveY[4] = {0,1,0,-1};
    G[--sy][--sx] = 0;
    qy.push(sy);
    qx.push(sx);
    while (!qy.empty())
    {
        int ux = qx.front();
        int uy = qy.front();
        qx.pop(); qy.pop();
        for(int i=0;i<4;++i) {
            int cpx = ux+moveX[i],cpy = uy+moveY[i];
            if(G[cpy][cpx] != -1) continue;
            G[cpy][cpx] = G[uy][ux] + 1;
            qx.push(cpx);
            qy.push(cpy);
        }
    }
    cout << G[--gy][--gx] << endl;
}
