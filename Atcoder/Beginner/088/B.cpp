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
    vector<int> a(n);
    int t=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        t += a[i];
    }
    sort(a.begin(),a.end());
    int c=0;
    for(int i=a.size()-1;i>=0;i-=2) c += a[i];
    cout << c-(t-c) <<endl;
}
