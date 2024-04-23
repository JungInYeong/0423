#include <iostream>
using namespace std;
//숫자 맞추기 게임

int main()
{
	srand(time(NULL));
	int num;
	num = rand() % 100 + 1;
	
	int n;
	while (1)
	{
		cout << "숫자를 입력하시오 : ";
		cin >> n;
		if (n < num) {
			cout << "더 큰 숫자를 입력하세요" << endl;
			cout << endl;
		}
		else if (n > num) {
			cout << "더 작은 숫자를 입력하세요" << endl;
			cout << endl;
		}
		else if (n == num) {
			cout << "정답입니다!" << endl;
			break;
		}
	}


	return 0;
}