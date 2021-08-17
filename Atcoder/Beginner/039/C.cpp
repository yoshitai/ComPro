#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    string s,a="WBWBWWBWBWBWWBWBWWBWBWBWWBWBWWB";
    cin >> s;
    if(s == a.substr(0,20)) cout << "Do" << endl;
    else if(s == a.substr(2,20)) cout << "Re" << endl;
    else if(s == a.substr(4,20)) cout << "Mi" << endl;
    else if(s == a.substr(5,20)) cout << "Fa" << endl;
    else if(s == a.substr(7,20)) cout << "So" << endl;
    else if(s == a.substr(9,20)) cout << "La" << endl;
    else if(s == a.substr(11,20)) cout << "Si" << endl;
}
