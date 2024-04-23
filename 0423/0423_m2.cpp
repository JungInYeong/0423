#include <iostream>
using namespace std;

// 디버깅 모드 연습

int main()
{
	int lopp_count = 2323;

	for (int i = 0; i < 5; i++) {
		cout << "Interation : " << i + 1 << endl;
	}

	for (int j = 0; j < 5000; j++) {

		if (lopp_count == j) {
			int num=0;
		}

		cout << j << endl;
	}

	return 0;
}