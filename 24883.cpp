#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    char n;
    cin >> n;

    if (n == 'N' || n == 'n')
        cout << "Naver D2";
    else
        cout << "Naver Whale";
}