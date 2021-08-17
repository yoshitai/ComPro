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

    string S, T;
    cin >> S >> T;

    vector<bool> checked(26, false), checked2(26, false);
    vector<string> s, t;
    int size = (int)S.size();
    for(int i = 0; i < size; ++i) {
        if(checked[S[i] - 'a']) continue;
        char c;
        for(int k = 0; k < 26; ++k) {
            if(S[i] == 'a' + k) {
                c = 'a' + k;
                checked[k] = true;
            }
        }
        string q = "";
        for(int j = i; j < size; ++j) {
            if(S[j] == c) q += to_string(j);
        }
        s.push_back(q + "?");
    }


    for(int i = 0; i < size; ++i) {
        if(checked2[T[i] - 'a']) continue;
        char c;
        for(int k = 0; k < 26; ++k) {
            if(T[i] == 'a' + k) {
                c = 'a' + k;
                checked2[k] = true;
            }
        }
        string q = "";
        for(int j = i; j < size; ++j) {
            if(T[j] == c) q += to_string(j);
        }
        t.push_back(q + "?");
    }

    bool f = 1;
    for(int i = 0; i < (int)s.size(); ++i) {
        if(s[i] != t[i]) f = 0;
    }

    cout << (f ? "Yes" : "No") << endl;
}