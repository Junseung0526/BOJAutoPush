#include <iostream>
#include <string>

using namespace std;

int main() {

	int n1, n2;

	while (true) {
		cin >> n1 >> n2;

		if (n1 > n2) {
			cout << "Yes" << "\n";
		}
		else if (n1 < n2) {
			cout << "No" << "\n";
		}
		else if (n1 == n2 && n1, n2 > 0) {
			cout << "No" << "\n";

		}
		else if (n1, n2 == 0) {
			break;
		}
	}


	return 0;
}