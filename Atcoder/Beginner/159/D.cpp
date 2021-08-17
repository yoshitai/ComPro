#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    vector<int> A(N);
    map<int,int> a;
    rep(i,N) cin >> A[i];
    for(int n:A) ++a[n];
    ll c = 0;
    for(auto x :a){
        c += (ll)x.second*(x.second-1)/2;
    }
    for(int n:A) {
        ll b = a[n]-1;
        cout << c - b << endl;
    }
}
