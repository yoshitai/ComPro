#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    int N;
    cin >> N;
    vector<double> v(N);
    for(int i = 0;i<N;i++) cin >> v[i];
    sort(v.begin(), v.end());
    double x = v[0];
    for(int i = 0;i<N-1;i++) {
        x = (x+v[i+1])/2.0; 
    }
    cout << x << endl;
}