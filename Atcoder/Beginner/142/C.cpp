#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<set>

using namespace std;


int main(){

    int N;
    cin >> N;
    vector<pair<int, int>> a(N);
    for(int i=0;i<N;i++){
        cin >> a[i].first;
        a[i].second=i+1;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<N;i++){
        cout<<a[i].second<<' ';
    }
    cout<<endl;
    
}
