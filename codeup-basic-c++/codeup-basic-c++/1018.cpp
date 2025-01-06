#include <iostream>
using namespace std;

int main() {
	string time;
	string h, m;
	cin >> time;

	unsigned int pos = 0; // 양수의 값만 가짐 반대로 음수만 signed 
	while (pos = time.find(":")) {
		h = time.substr(0,pos);
		m = time.substr(pos + 1, time.length());
		break;
	}

	cout << h << ":" << m;

	return 0;


}