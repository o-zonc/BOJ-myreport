#include <iostream>
#include <ctime>

using namespace std;

int main() {
    time_t timer;
    struct tm* t;
    timer = time(NULL);
    t = gmtime(&timer);

    cout << t->tm_year + 1900 << '\n';
    cout.width(2);
    cout.fill('0');
    cout << t->tm_mon + 1 << '\n';
    cout.width(2);
    cout.fill('0');
    cout << t->tm_mday << '\n';
}