#include <iostream>
using namespace std;

// 1부터 사용자가 입력한 숫자까지의 합을 출력하는 코드작성
int main() 
{
	cout << "1부터 n까지의 합 구하기" << endl;

	int in, out = 0;
	cout << "숫자(양의 정수)를 입력하세요 : ";
	cin >> in;

	for (int i = 1; i <= in; i++) {
		out += i;
	}
	cout << "1부터" << in << "까지의 합은 : " << out << endl;

	return 0;
}