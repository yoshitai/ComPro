#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int MAX = 101000;

int main() {
    int t1,t2,t3,t4,T,V;
    int n,x,y;
    cin >> t1 >> t2 >> t3 >> t4 >> T >> V;
    cin >> n;
    double d = T*V;
    bool flag = false;
    while(n--) {
        cin >> x >> y;
        double c;
        c = sqrt((x-t1)*(x-t1)+(y-t2)*(y-t2));
        c+= sqrt((x-t3)*(x-t3)+(y-t4)*(y-t4));
        if(d >= c) flag = true;
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}
