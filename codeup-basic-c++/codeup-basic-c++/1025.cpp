#include <iostream>
using namespace std;
#pragma warning(disable:4996)

int main() {
	int a,b,c,d,e; 
	scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e); 
	printf("[%d]\n", a * 10000);
	printf("[%d]\n", b * 1000);
	printf("[%d]\n", c * 100);
	printf("[%d]\n", d * 10);
	printf("[%d]\n", e * 1);

	return 0;
}