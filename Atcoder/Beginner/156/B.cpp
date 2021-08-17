#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    ll N;
    int K;
    cin >> N >> K;
    ll c = 0;
    while(N/K) {
        N = N/K;
        c++;
    }
    cout << c+1 << endl;

}