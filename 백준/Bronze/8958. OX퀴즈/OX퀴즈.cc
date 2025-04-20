#include <iostream>
#include <string>

using namespace std;

int OX(string& s) {

	int ac = 0;
	int sum = 0;

	for (int i = 0; i < s.length(); i++) {
		char v = s.at(i);
		if (v == 'O') {
			ac++;
			sum += ac;
		}
		else {
			ac = 0;
		}
	}
	return sum;
}

int main(int argc, const char* argv[]) {

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		string s;
		cin >> s;

		cout << OX(s) << "\n";
	}
	return 0;
}