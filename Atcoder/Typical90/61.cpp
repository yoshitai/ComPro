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
    int Q;
    cin >> Q;

    deque<int> deck;

    for(int i = 0; i < Q; ++i) {
        int t, x;
        cin >> t >> x;

        if(t == 1) deck.push_front(x);
        else if(t == 2) deck.push_back(x);
        else {
            try {
                cout << deck.at(x-1) << endl;
            }
            catch (std::out_of_range&) {
                std::cout << "out of range!" << std::endl;
            }
        }
    }
}