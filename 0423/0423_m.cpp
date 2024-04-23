#include <iostream>
using namespace std;

// 숫자입력 받기, 5의 배수이면 {입력한숫자}는 5의 배수입니다 출력 아니면 {입력한 숫자}는 5의 배수가 아닙니다. 출력
int main()
{
	int n;
	cout << "숫자를 입력해주세요 ";
	cin >> n;

	if (n % 5 == 0) {
		cout << n << "은 5의 배수 입니다" << endl;
	}
	else {
		cout << n << "은 5의 배수가 아닙니다" << endl;
	}


	return 0;
}