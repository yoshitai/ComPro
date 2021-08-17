#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    int A,B,W;
    cin >> A >> B >> W;
    W *= 1000;
    int a = W / A;
    int b = W / B;
    for(int i = b; i >= 0; --i) {
        int n = W - i*B;
        bool flag = false;
        for(int j = B-1; j >= A; --j) {
            if(n % j == 0) {
                cout << i << " " << n / j << endl;
                flag = true;
                break;
            }
        }
        if(flag) break;
    }
    for(int i = a; i >= 0; --i) {
        int n = W - i*A;
        bool flag = false;
        for(int j = A+1; j <=B; ++j) {
            if(n % j == 0) {
                cout << i << " " << n / j << endl;
                flag = true;
                break;
            }
        }
        if(flag) break;
    }
    // cout << "UNSATISFIABLE" << endl;
    // int minv, maxv;
    // for(int i = a; i >= 0; --i) {
    //     int N = W - A * a;
    //     if(N == 0) {
    //         maxv = i;
    //         break;
    //     }
    //     if(N >= A && N <= B) {
    //         maxv = i + 1;
    //     }
    // }
    // for(int i = b;)
}