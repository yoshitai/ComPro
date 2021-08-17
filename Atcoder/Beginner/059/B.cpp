#include<iostream> 

using namespace std;

int main(){
    string A, B;
    cin>> A >> B;
    bool flag_A = false;
    bool flag_B = false;
    if(A.size() == B.size()){
        for(int i = 0; i < A.size(); i++){
            if(A[i] == B[i]) continue;
            else if(A[i] > B[i]){
                flag_A = true;
                break;
            }
            else {
                flag_B = true;
                break;
            }
        }
    }
    if(A.size() > B.size() || flag_A ) cout << "GREATER" << endl;
    else if( A.size() < B.size() || flag_B ) cout << "LESS" <<endl;
    else cout << "EQUAL" <<endl;

}