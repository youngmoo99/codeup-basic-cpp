#include <iostream>
using namespace std;

int main() {
	char c;
	cin >> c;

	switch (c) { //�������� ���� char�� �ƽ�Ű�ڵ�� ��ȯ�����ϱ� ������ ����
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