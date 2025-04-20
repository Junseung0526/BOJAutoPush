#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0;i < n;i++) {
        int n1, n2;
        cin >> n1 >> n2;
        cout << n1 + n2 << "\n";
    }

    return 0;
}