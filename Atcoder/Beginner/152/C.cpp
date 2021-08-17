#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    int N;
    cin >> N;
    int p;
    cin >> p;
    int minValue = p;
    int ans = 1;
    for(int i=1;i<N;i++){
        cin>>p;
        if(minValue>p){
            ans++;
            minValue = p;
        }
    }
    cout << ans << endl;
}