#include<iostream>

using namespace std;

int main(){
    int D, G, p[11], c[11], ans = 1<<20;
    cin >> D >> G;
    for(int i = 0; i < D; i++) cin >> p[i] >> c[i];

    for(int i = 0; i < (1 << D); i++){
        int t = 0, n = 0, rest_max = 0;
        for(int j = 0; j < D; j++){
            if( (i>>j) & 1){
                t +=  100 * (j+1) * p[j] + c[j];
                n += p[j];
            }
            else{
                rest_max = j;
            }
        }
        if(t < G){
            int q = 100 * (rest_max + 1);
            int need = (G - t + q - 1) / q;
            if(need >= p[rest_max]){
                continue;
            }
            n += need;
        }
        ans = min(ans, n);
    }
    cout<< ans <<endl;
}