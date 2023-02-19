#include <iostream>
#include <string>

using namespace std;

int main() {
    string sth;
    while (1) {
        getline(cin, sth);

        if (sth == "") break;
        else cout << sth << '\n';
    }
}