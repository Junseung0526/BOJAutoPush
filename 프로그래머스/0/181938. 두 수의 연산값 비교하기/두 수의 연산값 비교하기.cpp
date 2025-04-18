#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    
    int answer = 0;

    string sa = to_string(a);
    string sb = to_string(b);

    string sum_sa = sa + sb;

    int c = stoi(sum_sa);

    int d = 2 * a * b;

    if (c > d)
        answer = c;
    else
        answer = d;

    return answer;
}