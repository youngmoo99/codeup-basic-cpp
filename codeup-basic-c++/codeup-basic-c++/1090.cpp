#include <iostream>
using namespace std;

int main() {
	int a, r, n; //시작값, 등비값, 몇번째인지 

	cin >> a >> r >> n;

	for (int i = 0; i < n - 1; i++) {
		a *= r;
	}
	cout << a;

	return 0;
}