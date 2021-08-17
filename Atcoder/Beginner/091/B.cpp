#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>

using namespace std;


int main(){
    int N, M;
    string b;
    cin>>N;
    vector<string> a(N);
    map<string, int> s; 
    for(int i=0;i<N;i++){
        cin>>a[i];
        s[a[i]]++;
    }
    cin>>M;
    for(int i=0;i<M;i++){
        cin>>b;
        s[b]--;
    }
    int m = 0;
    for(int i=0;i<N;i++){
        m=max(m, s[a[i]]);
    }
    cout << m <<endl;
}
