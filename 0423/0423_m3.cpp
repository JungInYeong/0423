#include <iostream>
using namespace std;

//실습 구구단 (1) 5단만 출력 (2) 1~9단 출력
int main()
{
	int n = 5;
	cout << "5단 출력" << endl;
	for (int i = 1; i <= 9; i++) {
		cout << n << " * " << i << " = " << n * i << endl;
	}
	cout << endl;

	cout << "1~9단 출력" << endl;
	for (int i = 1; i <= 9; i++) {
		cout << "---" << i << "단---" << endl;
		for (int j = 1; j <= 9; j++) {
			
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}
	
	
	return 0;
}