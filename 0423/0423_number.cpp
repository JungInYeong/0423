#include <iostream>
using namespace std;
//���� ���߱� ����

int main()
{
	srand(time(NULL));
	int num;
	num = rand() % 100 + 1;
	
	int n;
	while (1)
	{
		cout << "���ڸ� �Է��Ͻÿ� : ";
		cin >> n;
		if (n < num) {
			cout << "�� ū ���ڸ� �Է��ϼ���" << endl;
			cout << endl;
		}
		else if (n > num) {
			cout << "�� ���� ���ڸ� �Է��ϼ���" << endl;
			cout << endl;
		}
		else if (n == num) {
			cout << "�����Դϴ�!" << endl;
			break;
		}
	}


	return 0;
}