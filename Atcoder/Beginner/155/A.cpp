#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if((a!=b && b!=c && a!=c) || (a==b && b==c)) cout << "No" << endl;
    else cout << "Yes" << endl;

}