#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << !(a ^ b); // 참 거짓이 서로 같을때에만 참 출력

	return 0;
}