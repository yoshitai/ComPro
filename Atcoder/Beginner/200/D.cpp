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
    vector<int> A(N);
    for(int i = 0; i < N; ++i) cin >> A[i];

    vector<vector<int>> V(200);
    int n = min(N, 8);

    for(int i = 1; i < (1 << n); ++i) {
        vector<int> t;
        int mod = 0;
        for(int j = 0; j < n; ++j) {
            if(i & (1 << j)) {
                t.push_back(j+1);
                mod = (mod + A[j]) % 200;
            }
        }

        if(!V[mod].empty()) {
            cout << "Yes" << endl;
            cout << V[mod].size();
            for(int v : V[mod]) cout << " " << v;
            cout << endl;
            cout << t.size();
            for(int v : t) cout << " " << v;
            cout << endl;
            return 0;
        }
        else V[mod] = t;
    }

    cout << "No" << endl;
}