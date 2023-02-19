#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string j = "Junior";
    string s = "Senior";

    while (true) {
        string name;
        int age, weight;

        cin >> name >> age >> weight;
        if (name == "#") break;

        if (age > 17 || weight >= 80) {
            cout << name << ' ' << s << '\n';
        } else {
            cout << name << ' ' << j << '\n';
        }
    }
}