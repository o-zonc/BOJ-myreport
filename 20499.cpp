#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int k, d, a;
    char buf;
    cin >> k >> buf >> d >> buf >> a;

    if (k + a < d || d == 0)
        cout << "hasu";
    else
        cout << "gosu";
}