#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    int N,R;
    cin >> N >> R;
    if(N>=10) cout << R << endl;
    else {
        cout << 100*(10-N)+R << endl;
    }

}