#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define rep(i,n) for(i=0;i<(int)(n);i++);

int main(){
  int a,b,c,d,e,f;
  vector <int> v;
  double m=0.0;
  int x,y;
  cin>>a>>b>>c>>d>>e>>f;
  for(int i=0;100*a*i<=f;i++){
    for(int j=0;100*a*i+100*b*j<=f;j++){
      v.push_back(100*a*i+100*b*j);
    }
  }
  for(int i=0;i*c<=f;i++){
    for(int j=0;j*d+i*c<=f;j++){
      for(int k=0;k<v.size();k++){
        if(f>=v[i]+j*d+i*c){
          if(j*d+i*c<=v[i]/100*e){
            m=max(m,(double)(j*d+i*c)/(v[i]+j*d+i*c));
            x=v[i];
            y=j*d+i*c;
          }
        }
      }
    }
  }
  cout<<x<<" "<<y<<endl;
}
