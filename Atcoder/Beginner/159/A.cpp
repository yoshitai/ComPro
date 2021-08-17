#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

int calcNumOfCombination(int n, int r){
        int num = 1;
        for(int i = 1; i <= r; i++){
            num = num * (n - i + 1) / i;
        }
        return num;
    }

int main(){
    ll N,M;
    cin >> N >> M;
    int a = calcNumOfCombination(N,2);
    int b = calcNumOfCombination(M,2);
    cout << a+b << endl;
}
