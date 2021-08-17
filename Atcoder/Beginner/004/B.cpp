#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    char c[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> c[i][j];
        }
    }
    for(int i=3;i>=0;i--){
        for(int j=3;j>=0;j--){
            cout<< c[i][j] << " ";
        }
        cout << endl;
    }
}