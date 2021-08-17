#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


int main(){
    string s;
    cin>>s;
    int c=0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='0') c++;
    }
    int n=s.size()-c;
    int m = min(c,n);
    cout<<m*2<<endl;
}
