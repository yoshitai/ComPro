#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;


int main(){
    int N, X;
    cin >> N >> X;
    vector<int> L(N);
    for(int i=0;i<N;i++) cin >> L[i];
    int cnt=0,t=0;
    for(int i=0;i<100; i++){
        t += L[i];
        if(t>X) break;
        cnt++;
    }
    cout << cnt+1 << endl;
}
