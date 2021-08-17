#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;


int main(){
    int a,b;
    cin>> a >> b;
    int cnt=0;
    for(int i=a;i<=b;i++){
        int n1=i%10, n2=i/10000 % 10;
        int m1=i/10 % 10, m2=i/1000 % 10;
        if (n1 == n2 && m1 == m2) cnt++;
    }
    cout << cnt <<endl;
}
