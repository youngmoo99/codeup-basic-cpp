#include <iostream>
using namespace std;

#include <iostream>
using namespace std;


int main() {
	int n,ran;
	cin >> n;
	int nums[24] = {}; //0���� �ʱ�ȭ

	for (int i = 1; i <= n; i++) {
		cin >> ran;
		nums[ran]++;
	}

	for (int i = 1; i <= 23; i++) {
		cout << nums[i] << " ";
	}


	return 0;
}