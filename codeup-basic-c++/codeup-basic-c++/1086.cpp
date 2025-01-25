#include <iostream>
using namespace std;

int main() {
	int w, h, b;
	cin >> w >> h >> b;

	int byte = w * h * b;
	float mb;
	mb = (float)w * h * b / 8 / 1024 / 1024;

	cout << fixed;
	cout.precision(2);

	cout << mb << " MB";

	return 0;
}