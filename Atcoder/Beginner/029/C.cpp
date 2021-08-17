#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
int N;

void func(int n, string p) {

    if(n>=N) {
        cout << p << endl;
        return;
    }
    func(n+1, p+"a");
    func(n+1, p+"b");
    func(n+1, p+"c");
}
int main() {
    cin >> N;
    func(0, "");
}
