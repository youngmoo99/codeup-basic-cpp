#include <iostream>
using namespace std;

int main() {
	int n, ran;
	cin >> n;
	int min_num = 24;

	int* num = (int*)malloc(sizeof(int) * n);//동적할당

	for (int i = 0; i < n; i++) {
		cin >> ran; 
		num[i] = ran;
		if (num[i] < min_num) min_num = num[i];
	}

	cout << min_num;

	return 0;
}