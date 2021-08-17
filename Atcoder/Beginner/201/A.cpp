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

    int a, b, c;
    cin >> a >> b >> c;
    if((a+b) / 2 == c || (a+c) / 2 == b || (b+c)/2 == a) cout << "Yes" << endl;
    else cout << "No" << endl;
}