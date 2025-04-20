#include <iostream>
#include <string>
using namespace std;

int FindApocalypseNumber(int N) {
    int count = 0;
    int number = 666;

    while (true) {
        if (to_string(number).find("666") != string::npos) {
            count++;
            if (count == N)
                return number;
        }
        number++;
    }
}

int main() {
    int n;
    cin >> n;
    cout << FindApocalypseNumber(n);
    return 0;
}