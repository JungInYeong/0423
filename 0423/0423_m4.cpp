#include <iostream>
using namespace std;

// 1���� ����ڰ� �Է��� ���ڱ����� ���� ����ϴ� �ڵ��ۼ�
int main() 
{
	cout << "1���� n������ �� ���ϱ�" << endl;

	int in, out = 0;
	cout << "����(���� ����)�� �Է��ϼ��� : ";
	cin >> in;

	for (int i = 1; i <= in; i++) {
		out += i;
	}
	cout << "1����" << in << "������ ���� : " << out << endl;

	return 0;
}