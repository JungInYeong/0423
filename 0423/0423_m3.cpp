#include <iostream>
using namespace std;

//�ǽ� ������ (1) 5�ܸ� ��� (2) 1~9�� ���
int main()
{
	int n = 5;
	cout << "5�� ���" << endl;
	for (int i = 1; i <= 9; i++) {
		cout << n << " * " << i << " = " << n * i << endl;
	}
	cout << endl;

	cout << "1~9�� ���" << endl;
	for (int i = 1; i <= 9; i++) {
		cout << "---" << i << "��---" << endl;
		for (int j = 1; j <= 9; j++) {
			
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}
	
	
	return 0;
}