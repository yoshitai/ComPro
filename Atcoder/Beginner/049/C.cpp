#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
    string S;
    cin >> S;
    reverse(S.begin(), S.end());

    for(int i = 0; i < (int)S.size();) {
        if(S.substr(i, 5) == "maerd" || S.substr(i, 5) == "esare") i += 5;
        else if(S.substr(i, 6) == "resare") i += 6;
        else if(S.substr(i, 7) == "remaerd") i += 7;
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}