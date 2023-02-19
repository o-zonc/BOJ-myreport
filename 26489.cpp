#include <iostream>
#include <string>

using namespace std;

int cnt;
string s;

int main() {
    while (getline(cin, s)) cnt++;
    cout << cnt;
}