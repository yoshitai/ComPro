#include<iostream>

using namespace std;

struct plot{
  int x;
  int y;
};
int main(){
  plot p1,p2;
  cin>>p1.x>>p1.y>>p2.x>>p2.y;
  cout<<p2.x-(p2.y-p1.y)<<' '<<p2.y+(p2.x-p1.x);
  cout<<' '<<p1.x-(p2.y-p1.y)<<' '<<p1.y+(p2.x-p1.x)<<endl;
  return 0;


}
