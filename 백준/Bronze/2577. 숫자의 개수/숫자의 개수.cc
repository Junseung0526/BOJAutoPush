#include <iostream>
#include <string>
using namespace std;

int main(int argc , const char *agrv[]) {


	int count[10] = {};
	int a, b, c;

	cin >> a >> b >> c;
	int res = a * b * c;

	string str = to_string(res);

	for (char ch : str) {
		count[ch - '0']++;
	}

	for (int v : count) {
		cout << v << "\n";
	}
	return 0;
}