#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000000;
const double PI = acos(-1.0);

int main() {

    string A, B;
    cin >> A >> B;
    int size = min(A.size(), B.size());

    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    for(int i = 0; i < size; ++i) {
        int a = A[i] - '0';
        int b = B[i] - '0';

        if(a+b >= 10) {
            cout << "Hard" << endl;
            return 0;
        }
    }

    cout << "Easy" << endl;

}