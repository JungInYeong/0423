#include <iostream>
using namespace std;
// 실습 3 while 문 사용해보기, 
int main()
{
	// 5단

	/*cout << "5단 출력" << endl;
	
	int i = 1;
	while (i <= 9) {
		cout << 5 << "*" << i << "=" << 5 * i << endl;
		i++;
	}*/

	// 구구단
	/*int i = 1;
	while (i <= 9) {
		int j = 1;
		cout << "---" << i << "단---" << endl;

		while (j <= 9) {
			cout << i << " * " << j << " = " << i * j << endl;
			j++;
		}
		cout << endl;
		i++;
	}*/

	// 1부터 n까지 합
	cout << "1부터 n까지의 합 구하기" << endl;

	int i = 1, n;
	int sum = 0;
	
	cout << "숫자(양의 정수)를 입력하세요 : ";
	cin >> n;
	
	while (i <= n) {
		sum += i;
		i++;
	}
	cout << "1부터" << i << "까지의 합은 : " << sum << endl;

	return 0;
}