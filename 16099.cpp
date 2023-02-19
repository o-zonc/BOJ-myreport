#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long px, py, ex, ey;
        cin >> px >> py >> ex >> ey;
        if (px * py > ex * ey) {
            cout << "TelecomParisTech" << '\n';
        } else if (px * py < ex * ey) {
            cout << "Eurecom" << '\n';
        } else {
            cout << "Tie" << '\n';
        }
    }
}