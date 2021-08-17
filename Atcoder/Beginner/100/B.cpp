#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int D, N, c = 1;
    cin >> D >> N;
    int n = pow(100,D);
    int i=n;
    while(c < N){
        i+=n;
        if(!(i % (100 * n))) continue;
        c++; 
    }
    cout<< i <<endl;
}