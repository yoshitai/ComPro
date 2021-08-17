#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;


int main(){
    string s;
    cin >> s;
    int cnt = 0;
    for(int i=0;i<s.size()-1;i++){
        string sub=s.substr(i,2);
        if(sub == "WB" || sub == "BW") cnt++;
    }
    cout << cnt <<endl;
}
