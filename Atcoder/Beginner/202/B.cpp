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

    string s;
    cin >> s;
    reverse(s.begin(), s.end());

    for(int i = 0; i < (int)s.size(); ++i) {
        if(s[i] == '9') s[i] = '6';
        else if(s[i] == '6') s[i] = '9';
    }
    cout << s << endl;
}