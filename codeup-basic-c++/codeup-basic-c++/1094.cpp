#include <iostream>
using namespace std;

int main() {
	int n,ran;
	cin >> n;

	int* num = (int*)malloc(sizeof(int) * n);//동적할당

	for (int i = 0; i < n; i++) {
		cin >> ran;
		num[i] = ran;
	}

	for (int i = n - 1; i >= 0; i--) {
		cout << num[i] << " ";
	}

	return 0;
}