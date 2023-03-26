#include <iostream>
#include <string>

using namespace std;

string a[4] = {"North London Collegiate School", "Branksome Hall Asia", "Korea International School", "St. Johnsbury Academy"}, b[4] = {"NLCS", "BHA", "KIS", "SJA"};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    for (int i = 0; i < 4; i++) {
        if (b[i] == s) cout << a[i];
    }
}