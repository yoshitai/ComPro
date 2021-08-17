#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

using namespace std;

struct restaurant {
    string name;
    int point;
    int index;

    bool operator<( const restaurant& right ) const {
        return name == right.name ? point > right.point : name < right.name;
    }
};

int main() {
    int N;
    cin >> N;
    vector<restaurant> a(N);
    string s;
    int p;
    for(int i = 0; i < N; ++i) {
        cin >> s >> p;
        a[i].name = s;
        a[i].point = p;
        a[i].index = i;
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < N; ++i) cout << a[i].index + 1 << endl;
}