#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int limit, speed;
    cin >> limit >> speed;

    int speeding = speed - limit;
    int fine;
    if (speeding > 30) {
        fine = 500;
    } else if (speeding > 20) {
        fine = 270;
    } else if (speeding > 0) {
        fine = 100;
    } else {
        fine = 0;
    }

    if (fine)
        cout << "You are speeding and your fine is $" << fine << '.';
    else
    cout << "Congratulations, you are within the speed limit!";
}
