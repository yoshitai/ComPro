#include<iostream>
#include<vector>

using namespace std;

int main(){
    int  N, D, X;
    cin >> N >> D >> X;
    vector<int> a(N);
    for(int i=0;i<N;i++) cin >> a[i];
    int cnt=0;
    for(int i=0;i<N;i++){
        int c=1;
        for(int j=1;c<=D;j++){
            cnt++;
            c=j*a[i]+1;
        }
    }
    cout << cnt+X <<endl;
}