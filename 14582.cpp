#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int arr[18];
    for (int i = 0; i < 18; i += 2)
        cin >> arr[i];
    for (int i = 1; i < 18; i += 2)
        cin >> arr[i];

    int gem = 0, gul = 0;
    bool flag = 0;
    for (int i = 0; i < 18; i++) {
        if (i % 2)
            gul += arr[i];
        else
            gem += arr[i];

        if (gem > gul) {
            flag = 1;
            break;
        }
    }

    if (flag)
        cout << "Yes";
    else
        cout << "No";
}