#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0;i < (int)(n); ++i)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000000;
const double PI = acos(-1.0);

/*
queueとpriority_queueの組み合わせ
*/
int main() {

    int Q;
    cin >> Q;
    queue<int> q;
    priority_queue<int, vector<int>, greater<int>> pq;
    rep(i, Q) {
        int query;
        cin >> query;
        if(query == 1) {
            int x;
            cin >> x;
            q.push(x);
        }
        else if(query == 2) {
            if(pq.empty()) {
                cout << q.front() << endl;
                q.pop();
            }
            else {
                cout << pq.top() << endl;
                pq.pop();
            }
        }
        else {
            while(!q.empty()) {
                pq.push(q.front());
                q.pop();
            }
        }
    }
}