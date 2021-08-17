#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int a,b;
    cin >> a >> b;
    int ans;
    for(int i=1;i<=11000;i++) {
        double c = i*0.08;
        double d = i*0.1;
        if((int)c == a && (int)d == b){
            ans = i;
            cout << ans << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
}