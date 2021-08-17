#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<set>

using namespace std;

int ans=0;
long long N;
void dfs(long long s, bool a, bool b, bool c){
    if(s>N) return;
    if(a && b && c) ans++;
    dfs(s*10+3,true,b,c);
    dfs(s*10+5,a,true,c);
    dfs(s*10+7,a,b,true);
}
int main(){
    cin >> N;
    dfs(0,false,false,false);
    cout << ans <<endl;

}
