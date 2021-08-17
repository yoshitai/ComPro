#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<set>

using namespace std;


int main(){
    int n,tmp;
    cin >> n;
    //vector<int> p(n);
    int p[52];
    int c=0;
    for(int i=1;i<=n;i++) cin >> p[i];
    for(int i=1;i<=n;i++){
        if(p[i] != i){
            tmp=p[i];
            p[i]=p[tmp];
            p[tmp]=tmp;

            c++;
        }
    }
    if(c > 1) cout << "NO" <<endl;
    else cout << "YES" <<endl;
}
