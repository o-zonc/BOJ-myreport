#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cout << fixed;
    cout.precision(2);
    while (true) {
        double w;
        cin >> w;

        if (w < 0) break;

        cout << "Objects weighing " << w << " on Earth will weigh " << w * 0.167 << " on the moon.\n";
    }
}