#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    ll N;
    cin >> N;
    string ans = "";
    vector<int> ch;
    char alp[26] = {'z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y'};
    while(N != 0) {
        int tmp = N%26;
        ch.push_back(tmp);
        N /= 26;
        if(tmp == 0) N--;
    }
    for(int n:ch) ans = alp[n] + ans;
    cout << ans << endl;
}
