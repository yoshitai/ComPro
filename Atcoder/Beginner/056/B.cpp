#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int W, a, b, ans;
    cin >> W >> a >> b;
    if(a < b){
        if(a + W > b) ans = 0;
        else ans = b - a - W;
    }

    else {
        if(b + W > a) ans = 0;
        else ans = a - b - W;
    }
    cout << ans << endl;
}