#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<set>

using namespace std;

long long gcd(long long x,long long y){
    return y?gcd(y,x%y):x;
}
int main(){

    long long a,b;
    cin >> a >> b;
    long long n=gcd(a,b);
    vector<long long> num;
    for(long long i=2;i*i<=n;i++){
        if(n%i) continue;
        while(n%i == 0){
            n /= i;
        }
        num.push_back(i);
    }
    if(n != 1) num.push_back(n);
    cout << num.size()+1 <<endl;
}
