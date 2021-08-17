#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#include <cstdio>
using namespace std;

const int mod = 1e9+7;
typedef long long ll;

template<typename T>
vector<T> factorize(T x){
    vector<T> res;
    for(long long i = 2; i * i <= x; ++i){
        while(x % i == 0){
            x /= i;
            res.push_back(i);
        }
    }
    if(x != 1) res.push_back(x);
    return res;
}

int main() {
    ll N;
    cin >> N;
    cout << ceil(log2((int)factorize(N).size())) << endl;
}