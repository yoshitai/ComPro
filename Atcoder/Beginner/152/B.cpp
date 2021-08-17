#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    char a,b;
    cin >> a >> b;
    if(a>=b){
        for(int i=0;i<a-'0';i++) cout << b;
    }
    else {
        for(int i=0;i<b-'0';i++) cout << a;

    }
    cout <<endl;
}