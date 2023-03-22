#include <iostream>

using namespace std;

int tm[21];
int n;

int main() {
    int summ = 0, sumy = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> tm[i];
        summ += (tm[i] / 60 + 1) * 15;
        sumy += (tm[i] / 30 + 1) * 10;
    }
    if (summ < sumy)
        cout << "M " << summ;
    else if (summ > sumy)
        cout << "Y " << sumy << '\n';
    else
        cout << "Y M " << sumy << '\n';
}