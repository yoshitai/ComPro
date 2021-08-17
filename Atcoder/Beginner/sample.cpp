#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
	
	long long N = 21311;
	for(int i = 0; i < 100; i++) {
		N += 21311;
		cout << N + 1 << endl;
	}
}