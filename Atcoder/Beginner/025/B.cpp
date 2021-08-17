#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n,a,b;
    cin >> n >> a >> b;
    int w=0,e=0,d;
    string s;
    while(n--) {
        cin >> s >> d;
        if(d < a) d = a;
        else if(d > b) d = b;
        if(s == "East") e += d;
        else w += d;
    }
    if(w > e) cout << "West" << " " << w-e << endl;
    else if(w < e) cout << "East" << " " << e-w << endl;
    else cout << 0 << endl;
}
