#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	//삼항연산자 사용 
	cout << (a > b ? a : b);

	return 0;
}