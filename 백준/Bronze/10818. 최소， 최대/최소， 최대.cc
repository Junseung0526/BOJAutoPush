#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int number[1000001];
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> number[i];
	}

	sort(number, number + n);

	cout << number[0] << " " << number[n - 1];

	return 0;
}