#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

const string WHITESPACE = " \n\r\t\f\v";
 
string ltrim(const string &s)
{
    size_t start = s.find_first_not_of(WHITESPACE);
    return (start == string::npos) ? "" : s.substr(start);
}
 
string rtrim(const string &s)
{
    size_t end = s.find_last_not_of(WHITESPACE);
    return (end == string::npos) ? "" : s.substr(0, end + 1);
}
 
string trim(const string &s) {
    return rtrim(ltrim(s));
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string a = "", s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '<' || s[i] == '(') {
            if (a.back() != ' ') {
                a.append(" ");
            }
            a += s[i];
            a.append(" ");
        } else if (s[i] == '>' || s[i] == ')') {
            if (a.back() != ' ')
                a.append(" ");
            a += s[i];
            a.append(" ");
        } else if (i + 1 < s.length() && s[i] == '&' && s[i + 1] == '&') {
            if (a.back() != ' ')
                a.append(" ");
            a.append("&& ");
            i++;
        } else if (i + 1 < s.length() && s[i] == '|' && s[i + 1] == '|') {
            if (a.back() != ' ')
                a.append(" ");
            a.append("|| ");
            i++;
        } else {
            if (s[i] != ' ')
                a += s[i];
            else if (s[i] == ' ' && a.back() != ' ') {
                a += s[i];
            }
        }
    }

    cout << trim(a);
}