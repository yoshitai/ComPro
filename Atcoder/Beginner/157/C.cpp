#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n,m;
    cin >> n >> m;
    string b;
    bool flag = false;
    int s[5];
    char c[5];
    for(int i=0;i<m;i++) cin >> s[i] >> c[i];
    int num;
    if(n == 1) num = 0;
    else num = pow(10,n-1);
    for(int i=num;i<pow(10,n);i++) {
        bool f1 = true;
        b = to_string(i);
        for(int j=0;j<m;j++) {
            if(b[s[j]-1] != c[j]){
                f1 = false;
                break;
            }
        }
        if(f1) {
            flag = true;
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
}