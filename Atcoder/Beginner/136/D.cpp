#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 200000000;
const double PI = acos(-1.0);

int main() {
    string s;
    cin >> s;
    int N = s.size();

    // ランレングス圧縮
    vector<int> rs;
    rs.push_back(0);
    for(int i = 0; i < N;) {
        int j = i;
        while(j < N && s[i] == s[j]) ++j;
        rs.push_back(j);
        i = j;
    }

    vector<int> res(N, 0);
    for(int i = 1; i+1 < rs.size(); i+=2) {
        int r_count = rs[i] - rs[i-1]; // Rの個数
        int l_count = rs[i+1] - rs[i]; // Lの個数
        res[rs[i] - 1] = (r_count + 1) / 2 + l_count / 2;
        res[rs[i]] = r_count / 2 + (l_count + 1) / 2;
    }

    for(int n : res) cout << n << " ";
    cout << endl;
}