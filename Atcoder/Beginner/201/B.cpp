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
    vector<pair<int, string>> M(N);
    for(int i = 0; i < N; ++i) cin >> M[i].second >> M[i].first;
    sort(M.begin(), M.end());
    cout << M[N-2].second << endl;
}