#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <queue>
#include <map>
#include <cmath>
#include <cstdio>
using namespace std;

string fourDig(int n) {
    string s = to_string(n);
    while(s.size() < 4) {
        s = '0' + s;
    }
    return s;
}
int main() {

    string s;
    cin >> s;
    unordered_set<int> OK, BAD;
    for(int i = 0; i < 10; ++i) {
        if(s[i] == 'o') OK.insert(i);
        if(s[i] == 'x') BAD.insert(i);
    }

    int ans = 0;
    for(int i = 0; i < 10000; ++i) {
        bool f = 1;
        string ns = fourDig(i);
        for(int n : OK) {
            bool f2 = 0;
            for(char c : ns) {
                int num = c - '0';
                if(num == n) f2 = 1;
            }
            if(!f2) f = 0;
        }
        for(char c : ns) {
                int num = c - '0';
                if(BAD.find(num) != BAD.end()) f = 0;
        }
        if(f) ans++;
    }

    cout << ans << endl;
}
