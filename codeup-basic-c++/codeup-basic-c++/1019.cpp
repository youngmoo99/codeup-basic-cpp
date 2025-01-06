#include <iostream>
using namespace std;
#pragma warning(disable:4996)

int main() {
	int y, m, d;
	//입력값을 파싱해야해서 c활용 
	scanf("%d.%d.%d", &y, &m, &d);
	printf("%04d.%02d.%02d", y, m, d);

	return 0;
}