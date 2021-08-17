#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    int N;
    cin >> N;
    vector<int> d(N);
    for(int i=0;i<N;i++) cin >> d[i];
    sort(d.begin(),d.end());
    int i = N/2;
    cout << d[i]-d[i-1] << endl;
}