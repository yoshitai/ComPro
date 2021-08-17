#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;


int main(){

    int N, D;
    cin >> N >> D;
    int a=D * 2 +1;
    int ans = (N+(a-1))/a;
    cout << ans << endl;
}
