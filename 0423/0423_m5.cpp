#include <iostream>
using namespace std;
// �ǽ� 3 while �� ����غ���, 
int main()
{
	// 5��

	/*cout << "5�� ���" << endl;
	
	int i = 1;
	while (i <= 9) {
		cout << 5 << "*" << i << "=" << 5 * i << endl;
		i++;
	}*/

	// ������
	/*int i = 1;
	while (i <= 9) {
		int j = 1;
		cout << "---" << i << "��---" << endl;

		while (j <= 9) {
			cout << i << " * " << j << " = " << i * j << endl;
			j++;
		}
		cout << endl;
		i++;
	}*/

	// 1���� n���� ��
	cout << "1���� n������ �� ���ϱ�" << endl;

	int i = 1, n;
	int sum = 0;
	
	cout << "����(���� ����)�� �Է��ϼ��� : ";
	cin >> n;
	
	while (i <= n) {
		sum += i;
		i++;
	}
	cout << "1����" << i << "������ ���� : " << sum << endl;

	return 0;
}