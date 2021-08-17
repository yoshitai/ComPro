#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;


int main(){
    string s;
    cin >> s;
    int cnt=0;
    int p;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'A'){
            p=i;
            break;
        }
    }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i] == 'Z'){
            p = i-p+1;
            break;
        }
    }
    cout << p <<endl;
}
