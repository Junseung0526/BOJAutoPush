#include <iostream>
using namespace std;

int main() {
	int n, score;
	cin >> n;

	int max = 0;
	int total = 0;

	for (int i = 0;i < n; i++) {
		cin >> score;
		total += score;
		if (score > max) {
			max = score;
		}
	}

	double avg = 100.0 * total / n / max;

	cout << avg;
    
	return 0;
}
