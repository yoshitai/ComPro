#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
typedef long long ll;

const int mod = 1e9+7;
const int INF = 2000000;
const double PI = acos(-1.0);

int main() {
    int N;
    cin >> N;
    int A[N],maxValue=0,cnt[1000050]={};
    for(int i=0;i<N;++i) {
        cin >> A[i];
        maxValue = max(maxValue, A[i]);
        cnt[A[i]]++;
    }
    vector<bool> dp(maxValue+1,false);
    sort(A, A+N);
    for(int i=0;i<N;++i) {
        if(cnt[A[i]] >= 2) dp[A[i]] = true;
        for(int j=2;j*A[i]<=maxValue;++j) {
            dp[j*A[i]] = true;
        }
    }
    int count = 0;
    for(int i=0;i<N;++i) {
        if(!dp[A[i]]) count++;
    }
    cout << count << endl;
}
x