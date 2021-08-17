#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#include <cstdio>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
typedef long long ll;

ll convertTo10(string s) {
    ll res = 0, p = 1LL;
    for(int i = s.size()-1; i >= 0; --i) {
        ll n = s[i] - '0';
        res += n * p;
        p *= 8LL;
    }

    return res;
}

string convertTo8(ll n) {
    if(n == 0) return "0";
    string res = "";
    while(n > 0LL) {
        char amari = '0' + (n % 9LL);
        if(amari == '8') amari = '5';
        res = amari + res;
        n /= 9LL;
    }
    if(res[0] == '0') res.substr(1);
    return res;
}

int main() {

    string N;
    int  K;
    cin >> N >> K;

    rep(i, K) N = convertTo8(convertTo10(N));
    cout << N << endl;
}