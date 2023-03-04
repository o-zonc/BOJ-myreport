#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string chino;
    cin >> chino;

    int ubar = 0;
    for (int i = 0; i < chino.length(); i++) {
        if (chino[i] == '_') ubar++;
    }

    cout << chino.length() + ubar * 5 + 2;
}