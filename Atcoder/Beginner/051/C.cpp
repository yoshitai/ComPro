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

    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    for(int i = sy; i < ty; ++i) cout << 'U';
    for(int i = sx; i < tx; ++i) cout << 'R';
    for(int i = sy; i < ty; ++i) cout << 'D';
    for(int i = sx; i < tx; ++i) cout << 'L';
    cout << 'L';
    for(int i = sy; i < ty+1; ++i) cout << 'U';
    for(int i = sx; i < tx+1; ++i) cout << 'R';
    cout << 'D';
    cout << 'R';
    for(int i = sy; i < ty+1; ++i) cout << 'D';
    for(int i = sx; i < tx+1; ++i) cout << 'L';
    cout << 'U' << endl;
}