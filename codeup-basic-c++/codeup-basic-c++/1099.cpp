#include <iostream>
using namespace std;

int main() {
	int a[11][11] = {};
	int num;
	bool loop = 0;
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cin >> num; 
			a[i][j] = num;
		}
	}

	for (int i = 2; i <= 10; i++) {
		if (loop) break;
		for (int j = 2; j <= 10; j++) { 
			if (a[i][j] == 0) {
				a[i][j] = 9;
			}
			else if (a[i][j] == 1) {
				if (a[i + 1][j - 1] == 2) {
					a[i + 1][j - 1] = 9;
					loop = 1;
					break;
				}
				if (i == 9 && j == 10) {
					loop = 1;
					break;
				}

				a[i + 1][j - 1] = 9;
				i++; 
				j--;
			}
			if (a[i][j] == 2) {
				a[i][j] = 9;
				loop = 1;
				break;
			}
			
		}
	}
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}


	return 0;

}