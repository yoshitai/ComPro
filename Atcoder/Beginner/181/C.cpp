#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    
    int N;
    cin >> N;
    int x[110], y[110];
    for(int i = 0; i < N; ++i) cin >> x[i] >> y[i];
    for(int i = 0; i < N; ++i) {
        for(int j = i+1; j < N; ++j) {
            if(abs(x[i]-x[j]) != abs(y[i]-y[j])) continue;
            for(int k = j+1; k < N; ++k) {
                if(abs(x[i]-x[k]) == abs(y[i]-y[k])) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    for(int i = 0; i < N; ++i) {
        for(int j = i+1; j < N; ++j) {
            if(x[i]!=x[j]) continue;
            for(int k = j+1; k < N; ++k) {
                if(x[i]==x[k]) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    for(int i = 0; i < N; ++i) {
        for(int j = i+1; j < N; ++j) {
            if(y[i]!=y[j]) continue;
            for(int k = j+1; k < N; ++k) {
                if(y[i]==y[k]) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
}