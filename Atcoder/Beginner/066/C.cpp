#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    deque<ll> l;
    ll a;
    for (int i = 1; i <= N; i++)
    {
        cin >> a;
        if(i%2 == 0) l.push_front(a);
        else l.push_back(a);
    }
    if(N%2 == 0) {
        for (int i = 0; i < N; i++)
        {
            if(i) cout << " ";
            cout << l.front();
            l.pop_front(); 
        }
        
    }
    else {
        for (int i = 0; i < N; i++)
        {
            if(i) cout << " ";
            cout << l.back();
            l.pop_back(); 
        }
    }
    cout << endl;
}
