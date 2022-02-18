#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 200000000;
const double PI = acos(-1.0);

int sumDigit(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {

    int N;
    ll K;
    cin >> N >> K;

    int m = 100000;
    int t = N;
    map<int, int> mp;
    vector<int> v;
    int cnt = 0;
    for(int i = 0; i <= m; ++i) {
        t = (t + sumDigit(t)) % m;
        if(mp[t] != 0) break;
        mp[t] = 1;
        cnt++;
        v.push_back(t);
    }

    ll cycle = (ll)mp.size();

    for(int i = 0; i < cycle; ++i) {
        if(v[i] == 84563) {
            cout << i << endl;
        }
    }
    cout << (K - 1) % cycle << endl;
    cout << cycle << endl;
    cout << v[(K - 1) % cycle] << endl;
}