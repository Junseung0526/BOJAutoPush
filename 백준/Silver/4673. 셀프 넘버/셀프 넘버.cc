#include <iostream>
#include <string>
using namespace std;

int selectNum(int number) {
	int sum = number;

	while (number != 0) {
		sum += number % 10;
		number = number / 10;
	}

	return sum;
}

int main() {

	bool check[10001]{ false };

	for (int i = 1; i < 10001; i++) {
		int n = selectNum(i);
		if (n < 10001) {
			check[n] = true;
		}
	}

	for (int i = 1;i < 10001;i++) {
		if (!check[i]) {
			cout << i << "\n";
		}
	}
	return 0;
}