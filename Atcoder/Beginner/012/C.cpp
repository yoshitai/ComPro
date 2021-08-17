#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;


int main(){
    int N;
    cin >> N;
    int n = 2025 - N;
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            if(i*j == n) cout << i << " x " << j << endl;
        }
        
    }
    
}


    
