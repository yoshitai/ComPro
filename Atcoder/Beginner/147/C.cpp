#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#include <cstdio>
using namespace std;

struct Person {
    int A;
    vector<int> x, y;
};

int main() {

    int N;
    cin >> N;

    vector<Person> P(N);
    for(int i = 0; i < N; ++i) {
        int a;
        cin >> a;
        P[i].A = a;
        P[i].x.resize(a), P[i].y.resize(a);
        for(int j = 0; j < a; ++j) {
            cin >> P[i].x.at(j) >> P[i].y.at(j);
            P[i].x.at(j)--;
        }
    }

    int ans = 0;
    for(int b = 1; b < (1 << N); ++b) {
        bool f = true;
        for(int i = 0; i < N; ++i) {
            if(!((1 << i) & b)) continue;
            Person p = P[i];
            for(int j = 0; j < p.A; ++j) {
                if(((b >> p.x[j]) & 1) != p.y[j]) f = false;
            }
        }
        if(f) {
            int cnt = 0;
            for(int i = 0; i < N; ++i) {
                if(b & (1 << i)) cnt++;
            }
            ans = max(ans, cnt);
        }
    }

    cout << ans << endl;
}