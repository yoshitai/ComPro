#include<iostream>
#include<algorithm>

using namespace std;

int main(){
int a,b,c,ma;
cin>>a>>b>>c;
ma=max(max(a,b),c);
cout<<a+b+c-ma+ma*10<<endl;
return 0;
}
