#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    string s;
    int Q;
    string front = "";
    string end = "";
    int r=0;
    cin >> s;
    cin >> Q;
    int q,F;
    char C;
    for(int i=0;i<Q;i++) {
        cin >> q;
        if(q == 1) r++;
        else {
            cin >> F >> C;
            if(F == 1) {
                if(r%2) end = end+C;
                else front = C+front;
            }
            else {
                if(r%2) front = C+front;
                else end = end+C;
            }
        }
    }
    string ans = front + s + end;
    if(r%2) reverse(ans.begin(), ans.end());
    cout << ans << endl;

}