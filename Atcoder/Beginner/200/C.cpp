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

    int N;
    cin >> N;
    vector<int> A(N), amari(200, 0);
    for(int i = 0; i < N; ++i) {
        cin >> A[i];
        amari[A[i] % 200]++;
    }
    long long ans = 0;
    for(int i = 0; i < 200; ++i) {
        for(int j = amari[i]-1; j > 0; --j) {
            ans += (long long)j;
        }
    }
    cout << ans << endl;
}