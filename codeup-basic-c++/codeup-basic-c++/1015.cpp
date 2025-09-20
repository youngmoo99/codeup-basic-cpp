#include <iostream>
using namespace std;

int main() {
	float f;
	cin >> f;
	cout << fixed;
	cout.precision(2); 
	cout << f; //자릿수만 설정해주면 자동으로 반올림되어 출력됨 
	
	return 0;
}
