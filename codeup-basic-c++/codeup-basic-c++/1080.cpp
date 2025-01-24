#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int sum = 0;
	int ans;
	for (int i = 1; sum < n; i++) {
		sum += i;
		ans = i;
	}
	cout << ans;

	return 0;
}