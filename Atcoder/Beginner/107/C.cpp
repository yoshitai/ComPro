#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;


int main(){
    int N, K;
    cin >> N >> K;
    /* if(N==1){
        int a;
        cin>>a;
        cout << a <<endl;
        return 0;
    }*/
    vector<int> x(N);
    int ans=1000000000;
    for(int i=0;i<N;i++) cin >> x[i];
    for(int i=0;i<N-K+1;i++){
         int l=abs(x[i])+abs(x[i+K-1]-x[i]);
         int r=abs(x[i+K-1])+abs(x[i]-x[i+K-1]);
         ans= min(ans, min(l,r));
    }
    cout << ans <<endl;
}
