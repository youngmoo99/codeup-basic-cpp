#include <iostream>
using namespace std;

int h, w, n, l, d, x, y;

int a[100][100] = {};

int main() {

	cin >> h >> w; // 격자판의 세로, 가로 

	cin >> n; // 막대 개수 

	for (int i = 0; i < n; i++) {
		cin >> l >> d >> x >> y; //막대길이, 방향, 좌표 xy 

		if (d == 0) { //막대가 가로인경우
			for (int j = 0; j < l; j++) {
				a[x][y+j] = 1;
			}
		}
		else { // 막대가 세로인 경우
			for (int j = 0; j < l; j++) {
				a[x + j][y] = 1;
			}
		}
	}

	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;

}

