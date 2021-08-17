#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;

int main() {
    int N;
    string a;
    set<string> s;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        s.insert(a);
    }
    cout << s.size() << endl;
    
}
