#include <iostream>

using namespace std;

int main() {

    string str = "long";
    int n;
    cin >> n;

    int result = n / 4;

    for (int i = 0; i < result; i++) {
        cout << str << " ";
    }
    cout << "int";

    return 0;
}