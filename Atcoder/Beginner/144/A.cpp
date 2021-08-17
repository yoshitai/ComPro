#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    bool ok = (a <= 9 && b <= 9);
    cout << (ok ? a * b : -1) << endl;
}