#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<cstdio>

using namespace std;

int main(){
  /* <ABC104-C>
  *bitのフラグ確認
  */

  //int D=3;
  /* D=3
  * 0:000
  * 1:001
  * 2:010
  * 3:011
  * 4:100
  * 5:101
  * 6:110
  * 7:111
  */
  /* for(int i=0;i<(1<<D);i++){ // (1<<3):1000
    for(int j=0;j<D;j++){
      cout<<((i>>j) & 1);
    }
    cout<<endl;
  }*/

  /* <ABC089-B>
  *stoi()の利用
  *string -> int
  *  */

  /* <ABC113-C>
  * vector ;
  */

  /* vector< int > a;
  *  a[0].push_back(1);
  *  a[1].push_back(2);
  *  a[0].push_back(3);
  * 
  *  a[0][0]=1  a[0][1]=3  a[1][0]=2
  * */
  int N, M;
  int x,y;
  vector< int > a[100001];
  cin>>N>>M;
  for(int i=0;i<M;i++){
    scanf("%d %d",&x,&y);
    a[x-1].push_back(y); 
  }
  cout << a[0][1];
  cout <<endl;
}
