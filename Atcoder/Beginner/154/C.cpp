#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    int N;
    cin >> N;
    vector<ll> A(N);
    set<ll> a;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        a.insert(A[i]);
    }
    if(A.size() == a.size()) cout << "YES" << endl;
    else cout << "NO" << endl;
}
