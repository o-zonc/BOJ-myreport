#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    string longlong = "";
    int q = n / 4;
    for (int i = 0; i < q; i++) {
        if (i == q - 1)
            longlong += "long int";
        else longlong += "long ";
    }

    cout << longlong;
}