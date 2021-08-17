#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){

    int N;
    cin >> N;
    string s;
    cin >> s;
    int c = 0;
    for(int i=0;i<N-2;i++) {
        if(s.substr(i,3) == "ABC") c++;
    }
    cout << c << endl;
}
