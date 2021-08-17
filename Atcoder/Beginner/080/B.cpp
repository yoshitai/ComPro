#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<set>

using namespace std;


int main(){

    int n;
    cin >> n;
    int a = n;
    int tmp=0;
    while(a>0){
        tmp += a%10;
        a /= 10;
    }
    if(n%tmp) cout << "No" <<endl;
    else cout << "Yes" <<endl;

}
