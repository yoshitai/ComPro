#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <tuple>
#include <map>
#include <cmath>
#include <cstdio>
using namespace std;

long long rec(long long n) {
    if (n == 1) {
        return 1;
    }
    return rec(n / 2) * 2 + 1;
}

int main() {
    long long H;
    cin >> H;
    cout << rec(H) << endl;

}