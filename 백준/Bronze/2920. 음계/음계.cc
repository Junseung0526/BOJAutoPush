#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc , const char *agrv[]) {

	int sound[8];
	for (int i = 0; i < 8; i++) {
		cin >> sound[i];
	}

	bool isAscending = true;
	bool isDescending = true;

	for (int i = 0; i < 7; i++) {
		if (sound[i] < sound[i + 1]) {
			isDescending = false;
		}
		else if (sound[i] > sound[i + 1]) {
			isAscending = false;
		}
	}

	if (isAscending) {
		cout << "ascending" << "\n";
	}
	else if (isDescending) {
		cout << "descending" << "\n";
	}
	else {
		cout << "mixed" << "\n";
	}
	
	return 0;
}