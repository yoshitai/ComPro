#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int A[3][3];
    int f[3][3]; 
    bool flag = false;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++){
            cin >> A[i][j];
            f[i][j]=0;
        }
    }
    int n,b;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> b;
        for(int j=0;j<3;j++) {
            for(int k=0;k<3;k++) {
                if(A[j][k] == b) f[j][k] = 1;
            }
        }
    } 
    
    for(int i=0;i<3;i++){
        if(f[i][0] && f[i][1] && f[i][2]) flag = true;
        if(f[0][i] && f[1][i] && f[2][i]) flag = true;
    }
    if(f[0][0] && f[1][1] && f[2][2]) flag = true;
    if(f[0][2] && f[1][1] && f[2][0]) flag = true;

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}