#include<iostream>
#include<algorithm>
using namespace std;


int main() {
	long long n,mn;
	long long a,b,c,d,e;
	cin>>n;
	cin>>a>>b>>c>>d>>e;
  mn=min({ a,b,c,d,e});
	long long ans = ((n+ mn- 1) / mn);

	cout << ans+4 << endl;
}
