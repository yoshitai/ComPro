#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    string o,e;
    cin >> o >> e;
    e = e+" ";
    string ans = "";
    for (int i = 0; i < o.size(); i++)
    {
        ans = ans+o[i]+e[i];
    }
    cout << ans << endl;
}
