#include <iostream>
using namespace std;

int main() {
	int a, m, d,n;
	cin >> a >> m >> d >> n;

	for (int i = 0; i < n - 1; i++) {
		a = a * m + d;
	}

	cout << a;
	return 0;
}