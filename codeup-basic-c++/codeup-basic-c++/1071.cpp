#include <iostream>
using namespace std;

int main() {
	int a;
	while (cin >> a, a != 0) { // a가 0이 안나올때까지 반복입력
		cout << a << endl;
	}
	return 0;
}
