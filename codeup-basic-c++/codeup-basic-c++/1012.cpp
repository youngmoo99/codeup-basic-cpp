#include <iostream>
using namespace std;

int main() {
	float x;
	cin >> x;
	cout << fixed; // �Ҽ��� ���� ���� 
	cout.precision(6); //6�ڸ��� ����
	cout << x;
	return 0;
}