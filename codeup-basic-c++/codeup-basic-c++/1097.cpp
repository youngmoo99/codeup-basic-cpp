#include <iostream>
using namespace std;

int main() {
	int n,x,y;
	int a[20][20] = {};

	for (int i = 1; i < 20; i++) {
		for (int j = 1; j < 20; j++) {
			cin >> a[i][j];
		}
	}

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> x >> y;

		//가로줄 흑/백 바꾸기
		for (int j = 1; j < 20; j++) {
			if (a[x][j] == 0) a[x][j] = 1;
			else a[x][j] = 0;
		}
		//세로줄 흑/백 바꾸기
		for (int j = 1; j < 20; i++) {
			if (a[j][y] == 0) a[j][y] = 1;
			else a[j][y] = 0;
		}
	}

	for (int i = 1; i < 20; i++) {
		for (int j = 1; j < 20; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}