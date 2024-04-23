#include <iostream>
#include <string>
using namespace std;

// 두개의 변수와 연산자를 입력 받아 계산할 수 있는 프로그램

int main()
{
	int n, m;
	int num;

	cout << "첫 번째 정수 입력 : ";
	cin >> n;

	cout << "두 번째 정수 입력 : ";
	cin >> m;	

	cout << endl;

	cout << "1. 덧셈 2. 뺄셈 3. 곱셈 4. 나눗셈"<< endl;
	cout << "어떤 계산을 하시겠습니까? : ";
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