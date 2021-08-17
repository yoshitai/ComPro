#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int c[100005];

int main() {
    int N,Q;
    ll K;
    cin >> N >> K >> Q;
    int A;
    ll  b = Q - K;
    for(int i=0;i<Q;i++) {
        cin >> A;
        c[--A]++;
    }
    for(int i=0;i<N;i++) {
        if(c[i] > b) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}