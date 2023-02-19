#include <iostream>
#include <string>

using namespace std;

int m_arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string eng_mon[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int main() {
    string month, time, day;
    int year, mon, dayarr[2] = {}, count = 0, hour, minute, total;
    cin >> month >> day >> year >> time;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        m_arr[1] = 29;
        total = 366 * 24 * 60;
    } else
        total = 365 * 24 * 60;

    int daysum = 0;

    for (int i = 0; i < 12; i++) {
        if (month == eng_mon[i]) {
            for (int j = 0; j < i; j++) {
                daysum += m_arr[j];
            }
            break;
        }
    }

    for (int i = 0; i < day.length() - 1; i++) {
        dayarr[i] = day[i] - '0';
        count++;
    }

    if (count == 1)
        daysum += dayarr[0];
    else if (count == 2)
        daysum += dayarr[0] * 10 + dayarr[1];
    daysum--;

    if (time[0] == '0') {
        hour = time[1] - '0';
    } else
        hour = (time[0] - '0') * 10 + (time[1] - '0');

    if (time[3] == '0') {
        minute = time[4] - '0';
    } else
        minute = (time[3] - '0') * 10 + (time[4] - '0');

    int minsum = daysum * 24 * 60 + hour * 60 + minute;

    double result = (double) minsum / (double) total * 100;
    cout << fixed;
    cout.precision(15);
    cout << result;
}