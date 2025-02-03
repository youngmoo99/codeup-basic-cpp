#include <iostream>
using namespace std;

int main() {
	int n, x, y;
	int a[20][20] = {}; //0으로 초기화

	cin >> n;

	for (int i = 1; i <= n;i++) {
		cin >> x >> y;
		a[x][y] = 1;
	}

	for (int i = 1; i <20; i++) {
		for (int j = 1; j <20; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;

}