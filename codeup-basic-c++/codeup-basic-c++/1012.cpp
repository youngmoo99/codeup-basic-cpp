#include <iostream>
using namespace std;

int main() {
	float x;
	cin >> x;
	cout << fixed; // 소수점 이하 고정 
	cout.precision(6); //6자리로 고정
	
	cout << x;
	
	return 0;
}
