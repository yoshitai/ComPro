#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int N;

string getSequence(int bit) {

    string s = "";
    for(int i = 0; i < N; ++i) {
        if(bit & (1 << i)) s = "(" + s;
        else s = ")" + s;
    }

    return s;
}

bool check(int bit) {

    int count = 0;
    for(int i = 0; i < N; ++i) {
        if(count < 0) return false;
        if(bit & (1 << i)) count--;
        else count++;
    }

    return count != 0;
}

void solver() {
    if(N & 1) return;

    int bit = (1 << N) - (1 << N/2);
    for(int i = bit; i >= 1; --i) {
        if(check(i)) {
            cout << getSequence(i) << endl;
        }
    }
}

int main() {

    cin >> N;
    solver();

    return 0;
}