#include <iostream>
using namespace std;

int main() {
	char c;
	cin >> c;
	char cc = 'a';

	while ((int)cc != (int)c) {
		cout << cc++ << endl;
	}
	cout << c;

	return 0;
}