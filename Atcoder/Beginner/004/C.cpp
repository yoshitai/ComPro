#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int MAX = 101000;

int main() {
    int N,num[6]={1,2,3,4,5,6};
    cin >> N;
    int r = N%30;
    for(int i=0;i<r;++i) {
        int index = (i%5);
        swap(num[index], num[index+1]);
    }
    for(int n:num) cout << n;
    cout << endl;
}
