#include<iostream> 
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int A, B, C, K;
    cin >> A >> B >> C >> K;
    int m = max( {A, B, C});
    int d = pow(2,K);
    cout << (A + B + C - m) + m * d << endl;
}