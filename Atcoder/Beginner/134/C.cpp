#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    int N;
    cin >> N;
    vector<int> A(N),a;
    rep(i,N) cin >> A[i];
    a = A;
    sort(a.begin(),a.end());
    int first = a[N-1], second = a[N-2];
    for (int i = 0; i < N; i++)
    {
        if(A[i] == first) cout << second << endl;
        else cout << first << endl;
    }

    
}
