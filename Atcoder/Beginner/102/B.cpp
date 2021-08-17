#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i = 0; i < N; i++) cin >> a[i];
    int max_a = *max_element(a.begin(), a.end());
    int min_a = *min_element(a.begin(), a.end());
    cout<< max_a - min_a <<endl;
}