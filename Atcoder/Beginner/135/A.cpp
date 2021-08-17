#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<set>

using namespace std;


int main(){
    long long a,b;
    cin >> a >> b;
    if((a+b)%2) cout <<"IMPOSSIBLE"<<endl;
    else cout << (a+b)/2 <<endl;
}
