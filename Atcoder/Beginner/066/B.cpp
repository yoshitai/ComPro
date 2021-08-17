#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int f(string s){
    if(s.size()%2) return 0;
    int p = s.size()/2;
    string sb = s.substr(0,p);
    if(sb+sb == s){
        return sb.size()*2;
    }
    return 0;
}

int main() {
    string s;
    cin >> s;
    int ans;
    for(int i = 1;i<s.size();i++){
        ans=f(s.substr(0,s.size()-i));
        if(ans) break;
    }
    cout << ans << endl;

}