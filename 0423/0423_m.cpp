#include <iostream>
using namespace std;

// �����Է� �ޱ�, 5�� ����̸� {�Է��Ѽ���}�� 5�� ����Դϴ� ��� �ƴϸ� {�Է��� ����}�� 5�� ����� �ƴմϴ�. ���
int main()
{
	int n;
	cout << "���ڸ� �Է����ּ��� ";
	cin >> n;

	if (n % 5 == 0) {
		cout << n << "�� 5�� ��� �Դϴ�" << endl;
	}
	else {
		cout << n << "�� 5�� ����� �ƴմϴ�" << endl;
	}


	return 0;
}