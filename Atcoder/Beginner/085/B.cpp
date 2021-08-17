#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<set>

using namespace std;


int main(){

    int n;
    int d;
    set<int> s;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> d;
        s.insert(d);
    }

    cout << s.size() <<endl;
}
