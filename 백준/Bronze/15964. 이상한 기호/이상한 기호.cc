#include <iostream>
using namespace std;

int solution(int a, int b) {
	return (a + b) * (a - b);
}

int main() {
	int n1, n2;
	cin >> n1 >> n2;

	cout << solution(n1, n2) << "\n";

	return 0;
}