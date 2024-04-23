#include <iostream>
using namespace std;

//실습 4

int main()
{
//	int input;
//	int output = 0;
//
//	cout << "사용자가 입력한 숫자 더하기 " << endl; //0입력 종료
//	
//	
//	
//	
//	while (1) {
//		cout << "숫자를 입력하세요 (0: exit) : ";
//		cin >> input;
//		output += input;
//		if (input == 0) {
//			break;
//		}
//		
//
//	}
//
//	cout << "사용자가 입력한 수의 합은 : " << output;

//실습 5 별
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

