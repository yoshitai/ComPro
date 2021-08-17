#include<iostream>
#include<vector>

using namespace std;

long long gcb(long long a,long long b){
  if(a<b) return a? gcb(a,b%a) : b;
  return b? gcb(b,a%b) : a;
}