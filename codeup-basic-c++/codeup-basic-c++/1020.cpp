#include <iostream>
using namespace std;

int main() {
	string residentnum;
	cin >> residentnum;
	string frontnum,backnum;

	unsigned int dash = 0; 
	while (dash = residentnum.find("-")) {
		frontnum = residentnum.substr(0, dash);
		backnum = residentnum.substr(dash + 1, residentnum.length());
		break;
	}
	
	cout << frontnum << backnum;

	return 0;

}
