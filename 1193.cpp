#include <iostream>

using namespace std;

int sum[4501];
int i;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while (i < 4500) {
        if (i == 0) {
            sum[0] = 0;
        } else {
            sum[i] = sum[i - 1] + i;
        }
        i++;
    }

    int x;
    cin >> x;

    int i = 0;
    int temp;
    while (1) {
        temp = x - sum[i];
        if (temp <= 0) break;
        if (temp > 0) i++;
    }

    int h, t;
    if (i % 2 == 0) {
        h = i + temp;
        t = 1 - temp;
    } else {
        h = 1 - temp;
        t = i + temp;
    }

    cout << h << '/' << t << '\n';
}