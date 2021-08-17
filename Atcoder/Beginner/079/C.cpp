#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

string s;
string ans;

bool dfs(int n, int t,string e){
    if(n==4){
        if(t==7){
            ans = e;
            return true;
        }
        return false;
    }
    if(dfs(n+1,t+(s[n]-'0'),e+'+')) return true;
    if(dfs(n+1,t-(s[n]-'0'),e+'-')) return true;
    
    return false;
}
int main(){
    cin >> s;
    dfs(1,s[0]-'0',"");
    cout << s[0]<<ans[0]<<s[1]<<ans[1]<<s[2]<<ans[2]<<s[3]<<"=7"<<endl;
}
