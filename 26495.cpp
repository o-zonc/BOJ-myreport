#include <iostream>
#include <string>

using namespace std;

string s0 = "0000\n0  0\n0  0\n0  0\n0000\n";
string s1 = "   1\n   1\n   1\n   1\n   1\n";
string s2 = "2222\n   2\n2222\n2\n2222\n";
string s3 = "3333\n   3\n3333\n   3\n3333\n";
string s4 = "4  4\n4  4\n4444\n   4\n   4\n";
string s5 = "5555\n5\n5555\n   5\n5555\n";
string s6 = "6666\n6\n6666\n6  6\n6666\n";
string s7 = "7777\n   7\n   7\n   7\n   7\n";
string s8 = "8888\n8  8\n8888\n8  8\n8888\n";
string s9 = "9999\n9  9\n9999\n   9\n   9\n";

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string t;
    cin >> t;

    for (int i = 0; i < t.length(); i++) {
        char s = t[i];

        if (s == '0')
            cout << s0;
        else if (s == '1')
            cout << s1;
        else if (s == '2')
            cout << s2;
        else if (s == '3')
            cout << s3;
        else if (s == '4')
            cout << s4;
        else if (s == '5')
            cout << s5;
        else if (s == '6')
            cout << s6;
        else if (s == '7')
            cout << s7;
        else if (s == '8')
            cout << s8;
        else if (s == '9')
            cout << s9;

        cout << '\n';
    }
}