#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    int N;
    cin >> N;
    int A;
    bool flag = true;
    for(int i=0;i<N;i++) {
        cin >> A;
        if(A%2) continue;
        if(A%3 != 0 && A%5 != 0) flag = false;
    }
    if(flag) cout << "APPROVED" << endl;
    else cout << "DENIED" << endl;
}