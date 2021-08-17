#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;


int main(){
    long long L[88];
    L[0]=2;
    L[1]=1;
    for(int i=2;i<=86;i++){
        L[i]=L[i-2]+L[i-1];
    }
    int n;
    cin >> n;
    cout << L[n] <<endl;
}
