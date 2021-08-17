#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> A(n);
  int mn=1000000000;
  for(int i=0;i<n;i++){
    int c=0;
    cin>>A[i];
    while(A[i]%2==0){
      A[i]/=2;
      c++;
    }
    mn=min(mn,c);
  }
  cout<<mn<<endl;
}
