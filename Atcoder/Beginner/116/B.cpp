#include<iostream>
#include<vector>
#include<set>

using namespace std;

void tree(void);
//solution1
int main(){
  vector<int> n(1000000);
  int s;
  cin>>s;
  for(int i=2;i<=1000000;i++){
    n.at(s)=s;
    if(s%2==0) s/=2;
    else s=3*s+1;
    if(n.at(s)!=0){
      cout<<i<<endl;
      break;
    }
  }
  return 0;
}

//solution2
void tree(){
  set<int> a;
  int s;
  cin>>s;
  for(int i=2;i<=1000000;i++){
    a.insert(s);
    if(s%2==0) s/=2;
    else s=3*s+1;
    if(a.count(s)){
      cout<<i<<endl;
      break;
    }
  }
}
