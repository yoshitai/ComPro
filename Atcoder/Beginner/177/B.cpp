#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
	
	string s,t;
    cin >> s >> t;
    int maximam = 0;
    for(int i = 0;i <= s.size() - t.size(); ++i) {
        int c = 0;
        for(int j = 0; j < t.size(); j++) {
            if(s[i+j] == t[j]) c++;
        }
        maximam = max(maximam, c);
    }
    cout << t.size() - maximam << endl;
}