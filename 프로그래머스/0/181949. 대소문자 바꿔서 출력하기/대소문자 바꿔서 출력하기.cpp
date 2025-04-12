#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;
    
    for (char &c : str) {
        if ('a' <= c && c <= 'z') {  
            c = c - ('a' - 'A');
        } else if ('A' <= c && c <= 'Z') {  
            c = c + ('a' - 'A');
        }
    }
    
    cout << str << endl;
    return 0;
}
