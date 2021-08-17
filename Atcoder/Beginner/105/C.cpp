#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


int main(){
    long long N;
    cin >> N;
    string s;
    if(N >0){
        N *=-1;
    }
    if(N%2) {N +=-1; s=s+'1';}
    else s=s+'0';
    N /=2;
    while(N<0){
        if(N%2) s = '1'+s;
        else s = '0' + s;
        N /=2;
    }
    cout<<s<<endl;

}
