#include <iostream>
using namespace std;

int h, w, n, l, d, x, y;

int a[100][100] = {};

int main() {

	cin >> h >> w; // �������� ����, ���� 

	cin >> n; // ���� ���� 

	for (int i = 0; i < n; i++) {
		cin >> l >> d >> x >> y; //�������, ����, ��ǥ xy 

		if (d == 0) { //���밡 �����ΰ��
			for (int j = 0; j < l; j++) {
				a[x][y+j] = 1;
			}
		}
		else { // ���밡 ������ ���
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

