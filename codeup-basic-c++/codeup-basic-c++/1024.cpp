#include <iostream>
using namespace std;

int main() {
	string words;
	cin >> words;

	for (unsigned int i = 0; i < words.length(); i++) {
		cout << "\'" << words[i] << "\'" << endl;
	}
	return 0;

}