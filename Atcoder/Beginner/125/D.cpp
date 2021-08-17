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

    vector<long long> A(N);

    int negative = 0;
    long long minimum_number = 1e9+1, sum = 0;
    for(int i = 0; i < N; ++i) {
        cin >> A[i];
        if(A[i] < 0) negative++;
        minimum_number = min(minimum_number, abs(A[i]));
        sum += abs(A[i]);
    }

    if(negative & 1) sum -= 2LL * minimum_number;

    cout << sum << endl;

}