#include<iostream> 
#include<cmath>
#include<algorithm>
#include<string>
#include<set>
#include<vector>

using namespace std;

int main(){
    int x;
    cin >> x;
    vector<bool> a(x+1,false);
    a[1]=true;
    for(int i=2;i<=x;i++){
        int c=i*i;
        while(c <= x){
            a[c]=true;
            c*=i;
        }
    }
    for(int i=x;i>=1;i--){
        if(a[i]){
            cout<<i<<endl;
            break;
        }
    }
}