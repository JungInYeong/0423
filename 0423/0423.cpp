#include <iostream>
#include <string>
using namespace std;

// �ΰ��� ������ �����ڸ� �Է� �޾� ����� �� �ִ� ���α׷�

int main()
{
	int n, m;
	int num;

	cout << "ù ��° ���� �Է� : ";
	cin >> n;

	cout << "�� ��° ���� �Է� : ";
	cin >> m;	

	cout << endl;

	cout << "1. ���� 2. ���� 3. ���� 4. ������"<< endl;
	cout << "� ����� �Ͻðڽ��ϱ�? : ";
	cin >> num;

	cout << endl;

	switch (num) {
		case 1:
			cout << n << "+" << m << "= " << n + m << endl;
			break;
		case 2:
			cout << n << "-" << m << "= " << n - m << endl;
			break;
		case 3:
			cout << n << "*" << m << "= " << n * m << endl;
			break;
		case 4:
			cout << n << "/" << m << "= " << n / m << endl;
			break;
	}


	return 0;
}