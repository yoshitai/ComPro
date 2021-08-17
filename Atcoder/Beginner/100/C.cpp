#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


int main(){
    int N;
    cin>>N;
    vector<int> a(N);
    int cnt=0;
    for(int i=0;i<N;i++){
        cin>>a[i];
        while(!(a[i]%2)){
            cnt++;
            a[i] /=2;
        }
    }
    cout<< cnt <<endl;
}
