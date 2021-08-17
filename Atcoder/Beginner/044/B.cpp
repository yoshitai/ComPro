#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string w;
    cin >> w;
    for(char i='a';i<='z';i++) {
        int c = 0;
        for(int j=0;j<w.size();j++) {
            if(w[j] == i) c++;
        }
        if(c%2 != 0) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
