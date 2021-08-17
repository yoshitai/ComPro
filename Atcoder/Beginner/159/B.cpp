#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    string s;
    cin >> s;
    string rs = s;
    reverse(rs.begin(), rs.end());
    bool flag = true;
    if(s != rs) flag = false;
    int a = (s.size()-1)/2;
    if(s.substr(0,a) != rs.substr(a+1)) flag=false;
    if(s.substr(a+1) != rs.substr(0,a)) flag=false;
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}
