#include <iostream>
#include <string>

using namespace std;

string zero = " * * *\n*     *\n*     *\n*     *\n\n*     *\n*     *\n*     *\n * * *\n";
string one = "\n      *\n      *\n      *\n\n      *\n      *\n      *\n";
string two = " * * *\n      *\n      *\n      *\n * * *\n*\n*\n*\n * * *\n";
string three = " * * *\n      *\n      *\n      *\n * * *\n      *\n      *\n      *\n * * *\n";
string four = "\n*     *\n*     *\n*     *\n * * *\n      *\n      *\n      *\n";
string five = " * * *\n*\n*\n*\n * * *\n      *\n      *\n      *\n * * *\n";
string six = " * * *\n*\n*\n*\n * * *\n*     *\n*     *\n*     *\n * * *\n";
string seven = " * * *\n      *\n      *\n      *\n\n      *\n      *\n      *\n";
string eight = " * * *\n*     *\n*     *\n*     *\n * * *\n*     *\n*     *\n*     *\n * * *\n";
string nine = " * * *\n*     *\n*     *\n*     *\n * * *\n      *\n      *\n      *\n * * *\n";

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    if (n == 0) {
        cout << zero;
    } else if (n == 1) {
        cout << one;
    } else if (n == 2) {
        cout << two;
    } else if (n == 3) {
        cout << three;
    } else if (n == 4) {
        cout << four;
    } else if (n == 5) {
        cout << five;
    } else if (n == 6) {
        cout << six;
    } else if (n == 7) {
        cout << seven;
    } else if (n == 8) {
        cout << eight;
    } else if (n == 9) {
        cout << nine;
    }
}