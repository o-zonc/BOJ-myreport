#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    while (!cin.eof()) {
        string s;
        cin >> s;

        if (s == "CU") {
            cout << "see you\n";
        } else if (s == ":-)") {
            cout << "I’m happy\n";
        } else if (s == ":-(") {
            cout << "I’m unhappy\n";
        } else if (s == ";-)") {
            cout << "wink\n";
        } else if (s == ":-P") {
            cout << "stick out my tongue\n";
        } else if (s == "(~.~)") {
            cout << "sleepy\n";
        } else if (s == "TA") {
            cout << "totally awesome\n";
        } else if (s == "CCC") {
            cout << "Canadian Computing Competition\n";
        } else if (s == "CUZ") {
            cout << "because\n";
        } else if (s == "TY") {
            cout << "thank-you\n";
        } else if (s == "YW") {
            cout << "you’re welcome\n";
        } else if (s == "TTYL") {
            cout << "talk to you later\n";
        } else {
            cout << s << '\n';
        }
    }
}