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
    int N, M;
    cin >> N >> M;
    vector<long long> A(N);
    for(int i = 0; i < N; ++i) cin >> A[i];
    sort(A.begin(), A.end(), greater<long long>());


    vector<pair<long long, long long>> r;
    for(int i = 0; i < M; ++i) {
        long long b, c;
        cin >> b >> c;
        r.push_back(make_pair(c, b));
    }

    sort(r.begin(), r.end(), greater<pair<long long, long long>>());

    vector<long long> v;
    int i = 0, j = 0;
    while(v.size() <= N) {
        if(i < N && j < M) {
            if(A[i] > r[j].first) v.push_back(A[i]), ++i;
            else {
                for(int k = 0; k < r[j].second; ++k) v.push_back(r[j].first);
                ++j;
            }
        }
        else if(i >= N) {
            for(int k = 0; k < r[j].second; ++k) v.push_back(r[j].first);
            ++j;
        }
        else {
            v.push_back(A[i]);
            ++i;
        }
    }

    long long ans = 0;
    for(int i = 0; i < N; ++i) ans += v[i];
    cout << ans << endl;
}