#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    int x1,x2,x3,y1,y2,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int dx = -1 * x1;
    int dy = -1 * y1;
    double ans = abs((x2+dx)*(y3+dy)-(x3+dx)*(y2+dy)) / 2.0 ;
    cout << fixed << setprecision(2) << ans << endl;
    
}


    
