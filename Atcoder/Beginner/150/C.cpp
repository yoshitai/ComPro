#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    int N;
    cin >> N;
    vector<int> P(N),Q(N);
    rep(i,N) cin >> P[i];
    rep(i,N) cin >> Q[i];
    int a = 0,b = 0;
    while(next_permutation(P.begin(),P.end())) ++a;
    while(next_permutation(Q.begin(),Q.end())) ++b;
    cout << abs(b-a) << endl;

}


    
