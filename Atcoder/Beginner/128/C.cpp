#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){

    int N,M,k;
    cin >> N >> M;
    int p[10];
    vector<vector<int>> sw(M);
    for(int i=0;i<M;i++) {
        cin >> k;
        sw[i].resize(k);
        for(int j=0;j<k;j++) {
            cin >> sw[i][j];
            sw[i][j]--;
        }
    }
    for(int i=0;i<M;i++) cin >> p[i];
    int ans = 0;
    for(int i=0;i<(1<<N);i++){
        bool flag = true;
        for(int j=0;j<M;j++) {
            int cnt = 0;
            for(int x : sw[j]){
                if(i>>x & 1) cnt++;
            }
            cnt %= 2;
            if(cnt != p[j]) flag = false;
        }
        if(flag) ans++;
    }
    cout << ans << endl;
}
