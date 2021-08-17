#include<iostream> 
#include<cmath>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string s;
    int N;
    int c_max = 0;
    cin >> N >> s;
    for(int i = 1; i < N; i++){
        int cnt = 0;
        string a = s.substr(0, i);
        string b = s.substr(i, N - i);
        for(int j = 0; j < 26; j++){
            bool left = false, right = false;
            for(int c = 0; c < a.size();c++){
                if(a[c] == 'a'+j) left = true;
            }
            for(int c = 0; c < b.size();c++){
                if(b[c] == 'a'+j) right = true;
            }
            if(left && right) cnt++;
        }
        c_max = max(c_max, cnt);
    }
    cout << c_max << endl;
}