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

    int N, Q;
    string S;
    cin >> N >> S >> Q;

    bool f = 0;
    for(int i = 0; i < Q; ++i) {
        int t, a, b;
        cin >> t >> a >> b;
        a--, b--;
        if(t == 1) {
            if(f) swap(S[(a+N)%(2*N)], S[(b+N)%(2*N)]);
            else swap(S[a], S[b]);
        }
        else f ^= 1;
    }

    if(f) cout << S.substr(N, N) + S.substr(0, N) << endl;
    else cout << S << endl;
}