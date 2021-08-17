#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<set>

using namespace std;


int main(){

    int a[26]={};
    string s;
    cin >> s;
    for(char c:s) a[c-'a']++;
    for(int i=0;i<26;i++){
        if(!a[i]) {
            cout << (char)('a'+i)<<endl;
            return 0;
        }
    }
    cout << "None" <<endl;

    return 0;

}