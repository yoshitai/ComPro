#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;

int main() {
    string n;
    cin >> n;
    char c = n[n.size()-1];
    if(c == '3') cout << "bon" << endl;
    else if(c == '0' || c=='1' || c=='6' || c=='8') cout << "pon" << endl;
    else cout << "hon" << endl;
}
