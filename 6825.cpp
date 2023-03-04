#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    double w, h;
    cin >> w >> h;

    double bmi = w / (h * h);

    if (bmi > 25) {
        cout << "Overweight";
    } else if (18.5 <= bmi && bmi <= 25) {
        cout << "Normal weight";
    } else {
        cout << "Underweight";
    }
}