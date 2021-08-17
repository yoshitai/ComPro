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
    vector<int> a(n+1);
    vector<int> b(n);
    int f1,f2;
    for(int i=0;i<=n;i++) cin >>a[i];
    for(int i=0;i<n;i++) cin >>b[i];
    f1=min(a[0],b[0]), f2=min(a[1],b[0]-f1);
    long long sum=0; sum+= f1+f2;
    for(int i=1;i<n;i++){
        f1=min(a[i]-f2,b[i]);
        f2=min(a[i+1],b[i]-f1);
        sum +=f1+f2;
    }
    cout << sum <<endl;
}
