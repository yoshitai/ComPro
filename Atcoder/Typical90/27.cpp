#include <iostream>
#include <algorithm>
#include <cmath>
#include <set>
#include <vector>

using namespace std;

typedef long long ll;


int main() {

    int N;
    cin >> N;

    set<string> S;
    for(int i = 1; i <= N; ++i) {
        string s;
        cin >> s;
        if(S.find(s) == S.end()) {
            S.insert(s);
            cout << i << endl;
        }
    }
}