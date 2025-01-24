#include <iostream>
using namespace std;

int main() {
	char c;
	while (cin >> c, c != 'q') {
		cout << c << endl;
	}
	cout << c;
	return 0;
}