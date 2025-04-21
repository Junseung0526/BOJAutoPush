#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int basket[101] = { 0 };

    for (int i = 0; i < m; i++) {
        int start, end, ball;
        cin >> start >> end >> ball;

        for (int j = start; j <= end; j++) {
            basket[j] = ball;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << basket[i] << " ";
    }

    return 0;
}