#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)

vector<string> rot90(int N, vector<string> S) {
    vector<string> G(N, string(N, '?'));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            G[i][j] = S[N - j - 1][i];
        }
    }
    return G;
}

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

bool check(int N, vector<string> S, vector<string> T) {
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            if(S[i][j] != T[i][j]) return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    vector<string> S(N), T(N);
    rep(i, N) cin >> S[i];
    rep(i, N) cin >> T[i];

    int tx = calX(N, T), ty = calY(N, T);
    T = shiftX(N, tx, T);
    T = shiftY(N, ty, T);
    for(int i = 0; i < 4; ++i) {
        vector<string> G;
        int sx = calX(N, S), sy = calY(N, S);
        G = shiftX(N, sx, shiftY(N, sy, S));
        if(check(N, G, T)) {
            cout << "Yes" << endl;
            return 0;
        }
        S = rot90(N, S);
    }

    cout << "No" << endl;
}