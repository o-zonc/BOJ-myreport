#include <iostream>

using namespace std;

int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isleap(int year) {
    if (year % 4 == 0)
        if (year % 100 != 0 || year % 400 == 0)
            return true;

    return false;
}

int toDay(int y, int m, int d) {
    int day = 0;

    for (int i = 0; i < y; ++i) {
        day += 365;
        if (isleap(i))
            day += 1;
    }

    for (int i = 0; i + 1 < m; ++i) {
        if (i == 1)
            day += isleap(y);
        day += month[i];
    }

    day += d;

    return day;
}

int main() {
    int y1, m1, d1;
    int y2, m2, d2;
    int result, count = 0;
    int day1, day2;

    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;

    day1 = toDay(y1, m1, d1);
    day2 = toDay(y2, m2, d2);

    if (y2 - y1 > 1000) {
        cout << "gg";
    }
    if (y2 - y1 == 1000) {
        if (toDay(0, m1, d1) <= toDay(0, m2, d2)) {
            cout << "gg";
            return 0;
        }
    }

    cout << "D-" << day2 - day1 << "\n";

    return 0;
}