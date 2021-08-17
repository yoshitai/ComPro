#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    int N;
    cin >> N;
    map<int, int> p;
    int num;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        p[num]++;
    }
    int ans=0;
    for(auto x:p) {
        if(x.second % 2) ans++;
    }
    cout << ans << endl;
}
