#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<set>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> h(n);
    int ans=0;
    for(int i=0;i<n;i++) cin >> h[i];
    int f=0;
    for(int i=0;i<n;i++){
        if(f>=h[i]) f=h[i];
        else {
            ans+=h[i]-f;
            f=h[i];
        }
    }
    cout << ans <<endl;
}
