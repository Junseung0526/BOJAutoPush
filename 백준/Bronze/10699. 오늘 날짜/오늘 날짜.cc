#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main() {
    time_t utc = time(nullptr);
    utc += 9 * 60 * 60;
    tm* kst = gmtime(&utc);

    cout << put_time(kst, "%Y-%m-%d") << endl;

    return 0;
}