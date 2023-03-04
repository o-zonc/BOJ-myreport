#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int sd, jd, hd, ck, sp;
    cin >> sd >> jd >> hd >> ck >> sp;

    cout << min(min(sd, jd), hd) + min(ck, sp) - 50;
}