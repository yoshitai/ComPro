#include<iostream>
#include<vector>

using namespace std;

const long long INF = 1e18;

long long N;
vector<long long> H, S;

bool f(long long x) {
    vector<int> count(N);
    for(int i = 0; i < N; ++i) {
        if(H[i] > x) return false;
        count[min(N - 1, (x - H[i]) / S[i])]++;
    }
    for(int i = 0; i < N - 1; ++i) count[i+1] += count[i];
    for(int i = 0; i < N; ++i) {
        if(count[i] > i + 1) return false;
    }
    return true;
}

int main() {
    cin >> N;
    H.resize(N), S.resize(N);
    for(int i = 0; i < N; ++i) cin >> H[i] >> S[i];

    long long ng = -1, ok = INF;

    while(ok - ng > 1) {
        long long x = (ng + ok) / 2;
        if(f(x)) ok = x;
        else ng = x;
    }

    cout << ok << endl;
}