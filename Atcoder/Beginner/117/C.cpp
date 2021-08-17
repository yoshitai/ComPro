#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<set>

using namespace std;


int main(){
    int n, m;
    cin >> n >> m;
    vector<int> x(m);
    vector<int> a(m-1);
    for(int i=0;i<m;i++) cin >> x[i];
    sort(x.begin(),x.end());
    for(int i=0;i<m-1;i++){
        a[i]=abs(x[i+1]-x[i]);
    }
    sort(a.begin(),a.end());
    int sum=0;
    for(int i=0;i<m-n;i++) sum+=a[i];
    cout<< sum <<endl;
}
