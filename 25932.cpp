#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    while (n--) {
        int cnt = 0;
        for (int i = 0; i < 10; i++) {
            int a;
            cin >> a;

            cout << a << ' ';
            if (a == 18)
                cnt += 1;
            else if (a == 17)
                cnt += 2;
        }

        cout << '\n';
        if (cnt == 0)
            cout << "none\n\n";
        else if (cnt == 1)
            cout << "mack\n\n";
        else if (cnt == 2)
            cout << "zack\n\n";
        else
            cout << "both\n\n";
    }
}
