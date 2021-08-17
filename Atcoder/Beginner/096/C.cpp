#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

int N;
vector<vector<int>> B(21);

int main(){
    int H,W;
    cin >> H >> W;
    char s[50][50];
    for(int i=0;i<H;++i)
        for(int j=0;j<W;++j) cin >> s[i][j];
    bool flag = true;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            bool k = false;
            if(s[i][j] == '.') continue;
            if(i-1 >= 0) {
                if(s[i-1][j] == '#') k =true;
            }
            if(i+1<H) {
                if(s[i+1][j] == '#') k=true;
            }
            if(j-1 >= 0) {
                if(s[i][j-1] == '#') k=true;
            }
            if(j+1 < W) {
                if(s[i][j+1] == '#') k=true;
            }
            if(!k) flag = false;
            if(!flag) {
                cout << "No" << endl;
                return 0;
            }
        }
        

    }
    cout << "Yes" << endl;
    
}
