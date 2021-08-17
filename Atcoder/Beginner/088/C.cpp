#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    int c[3][3];
    int b1,b2,b3;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++) cin >> c[i][j];
    for(int i=0;i<=100;i++){
        b1 = c[0][0]-i;
        b2 = c[0][1]-i;
        b3 = c[0][2]-i;
        if(b1<0 || b2<0 || b3<0) break;
        if(c[1][0]-b1 == c[1][1]-b2 && c[1][1]-b2 == c[1][2]-b3) {
            if(c[2][0]-b1 == c[2][1]-b2 && c[2][1]-b2 == c[2][2]-b3){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}