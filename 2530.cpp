#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int hour, min, sec;
    cin >> hour >> min >> sec;

    int cook;
    cin >> cook;

    int rh, rm, rs;
    rs = (cook % 60 + sec) % 60;
    rm = (cook / 60 % 60 + min + (cook % 60 + sec) / 60) % 60;
    rh = (cook / 3600 + hour + (cook / 60 % 60 + min + (cook % 60 + sec) / 60) / 60) % 24;

    cout << rh << ' ' << rm << ' ' << rs;
}