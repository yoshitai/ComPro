#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    string S;
    cin >> N >> S;
    char p = S[0];
    int c=1;
    for(int i=1;i<N;i++) {
        if(S[i] == p) continue;
        c++;
        p = S[i];
    }
    cout << c << endl;
}