#include <iostream>
using namespace std;

int main() {
	long long a, b, c;
	cin >> a >> b >> c;

	cout << a + b + c << endl;
	cout << fixed;
	cout.precision(1);
	cout << (float)(a + b + c) / 3 << endl;

	return 0;
}