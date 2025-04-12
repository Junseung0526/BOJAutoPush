#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // 입력 값이 1 ≤ a, b ≤ 100 범위를 벗어나지 않는지 확인
    if (a < 1 || a > 100 || b < 1 || b > 100) {
        cout << "입력 값은 1 이상 100 이하이어야 합니다." << endl;
        return 1;
    }

    cout << a << " + " << b << " = " << (a + b) << endl;
    return 0;
}
