#include <iostream>
using namespace std;
int main(){
    int D, G, p[11], c[11];
    cin >> D >> G;
    for(int i = 0; i < D; ++i){
        cin >> p[i] >> c[i];
    }

    int ans = 1e9;
    for(int mask = 0; mask < (1 << D); ++mask){  // D=3 : 1<<D=1000=8
        int s = 0, num = 0, rest_max = -1;
        for(int i = 0; i < D; ++i){
            if(mask >> i & 1){
                s += 100 * (i+1) * p[i] + c[i];
                num += p[i];
            }else{
                rest_max = i;
            }
        }
        if(s < G){
            int s1 = 100 * (rest_max + 1);
            int need = (G - s + s1 - 1) / s1;   //(a+(b-1))/b 除算切り上げ
            if(need >= p[rest_max]){
                continue;
            }
            num += need;
        }
        ans = min(ans, num);
    }
    cout << ans << endl;
}
