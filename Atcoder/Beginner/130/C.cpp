#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    int W,H,x,y;
    cin >> W >> H >> x >>y;
    double area = (double)W*H/2.0;
    int c = 0;
    if(x == W/2.0 && y == H/2.0) c=1;
    cout << fixed << setprecision(9) << area << " ";
    cout << c <<endl;
}
