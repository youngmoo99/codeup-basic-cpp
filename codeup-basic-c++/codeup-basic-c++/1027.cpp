#include <iostream>
using namespace std;
#pragma warning(disable:4996)

int main() {
	int y, m, d;
	scanf("%04d.%02d.%02d", &y, &m, &d);
	printf("%02d-%02d-%04d", d, m, y);

	return 0;
}
