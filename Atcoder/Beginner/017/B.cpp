#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    string x,a = "";
    cin >> x;
    if(x == "") {
        cout << "YES" << endl;
        return 0;
    }
    int p=0;
    while(p<x.size()) {
        if(x[p] == 'c' && x[p+1] == 'h') p +=2;
        else {
            a.push_back(x[p]);
            ++p;
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i]!='o' && a[i]!='k' && a[i]!='u') {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    
}
