#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;


int main(){
    int a, b;
    cin >> a >> b;
    int c=b,d = 0;
    while(c>0){
        d++;
        c /=10;
    }
    int n=a*pow(10,d)+b;
    for(int i=4;i*i<=n;i++){
        if(i*i == n){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" <<endl; 
    
}
