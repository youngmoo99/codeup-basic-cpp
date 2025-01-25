#include <iostream>
using namespace std;

int main() {
	int r, g, b;
	cin >> r >> g >> b;
	int cnt = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < g; j++) {
			for (int k = 0; k < b; k++) {
				cnt++;
				cout << i << " " << j << " " << k << endl;
			}
		}
	}
	cout << cnt;
	return 0;
}