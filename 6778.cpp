#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int antenna, eye;
    cin >> antenna >> eye;

    if (antenna >= 3 && eye <= 4) {
        cout << "TroyMartian\n"; 
    }
    if (antenna <= 6 && eye >= 2) {
        cout << "VladSaturnian\n";
    }
    if (antenna <= 2 && eye <= 3) {
        cout << "GraemeMercurian\n";
    }
}