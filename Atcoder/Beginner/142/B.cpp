#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<set>

using namespace std;


int main(){

    int N,K;
    cin >> N >> K;
    int h[100010];
    int ans=0;
    for(int i=0;i<N;i++){
        cin >> h[i];
        if(h[i]>=K) ans++;
    }
    cout <<ans<<endl;
}
