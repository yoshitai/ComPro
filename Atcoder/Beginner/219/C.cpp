#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000000;
const double PI = acos(-1.0);

map<char, int> m;

bool comp(string a, string b) {
    int a_size = (int)a.size();
    int b_size = (int)b.size();
    for(int i = 0;;++i) {
        if(i >= a_size) return true;
        if(i >= b_size) return false;
        if(m[a[i]] < m[b[i]]) return true;
        else if(m[a[i]] > m[b[i]]) return false;
    }
}

void MergeSort(vector<string> &a, int left, int right) {
    if(right - left == 1) return;
    int mid = (left + right) / 2;

    MergeSort(a, left, mid);

    MergeSort(a, mid, right);

    vector<string> buf;
    for(int i = left; i < mid; ++i) buf.push_back(a[i]);
    for(int i = right - 1; i >= mid; --i) buf.push_back(a[i]);

    int index_left = 0;
    int index_right = (int)buf.size() - 1;
    for(int i = left; i < right; ++i) {
        if(comp(buf[index_left], buf[index_right])) {
            a[i] = buf[index_left++];
        }
        else {
            a[i] = buf[index_right--];
        }
    }
}

int main() {

    string X;
    cin >> X;
    for(int i = 0; i < 26; ++i) {
        m[X[i]] = i + 1;
    }
    int N;
    cin >> N;
    vector<string> S(N);
    for(int i = 0; i < N; ++i) cin >> S[i];

    MergeSort(S, 0, N);
    for(string s : S) cout << s << endl;
}