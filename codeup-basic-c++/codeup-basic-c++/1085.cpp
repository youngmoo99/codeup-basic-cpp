#include <iostream>
using namespace std;

int main() {
	int h, b, c, s;
	cin >> h >> b >> c >> s;
	int byte;
	byte = h * b * c * s;

	float mb;
	mb = (float)byte / 8 / 1024 / 1024;

	cout << fixed;
	cout.precision(1);

	cout << mb << " MB";

	return 0;

}