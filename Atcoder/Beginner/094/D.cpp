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

    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; ++i) cin >> A[i];

    int max_value = *max_element(A.begin(), A.end());
    int half = max_value / 2;

    int ans = 0;
    for(int i = 0; i < n; ++i) {
        if(abs(ans-half) > abs(A[i]-half)) ans = A[i];
    }

    cout << max_value << " " << ans << endl;
}