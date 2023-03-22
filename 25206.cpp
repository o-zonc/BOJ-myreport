#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, double> lg = {{"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0}, {"F", 0.0}};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    double sty = 0, sum = 0;
    for (int i = 0; i < 20; i++) {
        string s, ltg;
        double pnt;
        cin >> s >> pnt >> ltg;

        if (ltg == "P") continue;
        sum += pnt * lg[ltg];
        sty += pnt;
    }

    cout << fixed;
    cout.precision(10);
    cout << sum / sty;
}