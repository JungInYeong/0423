#include <iostream>
using namespace std;

//�ǽ� 4

int main()
{
//	int input;
//	int output = 0;
//
//	cout << "����ڰ� �Է��� ���� ���ϱ� " << endl; //0�Է� ����
//	
//	
//	
//	
//	while (1) {
//		cout << "���ڸ� �Է��ϼ��� (0: exit) : ";
//		cin >> input;
//		output += input;
//		if (input == 0) {
//			break;
//		}
//		
//
//	}
//
//	cout << "����ڰ� �Է��� ���� ���� : " << output;

//�ǽ� 5 ��
	int n;
	cout << "input : ";
	cin >> n;
	cout << endl;
	cout << "output" << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}

