#include <iostream>
using namespace std;

int main() {
	int a, d, n; //시작값 등차값 몇번째수인지 

	cin >> a >> d >> n;


	for (int i = 0; i < n-1; i++) {
		a += d;
	}
	cout << a;

	return 0;
}