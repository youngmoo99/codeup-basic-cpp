#include <iostream>
using namespace std;

int main() {
	char c;
	cin >> c;

	switch (c) { //정수값만 가능 char는 아스키코드로 변환가능하기 때문에 가능
	case 'A': 
		cout << "best!!";
		break;
	case 'B':
		cout << "good!!";
		break;
	case 'C':
		cout << "run!";
		break;
	case 'D':
		cout << "slowly~";
		break;
	default:
		cout << "what?";
	}

	return 0;
}