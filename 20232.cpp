#include <iostream>
#include <string>

using namespace std;

string porch[30] = {
    "ITMO",
    "SPbSU",
    "SPbSU",
    "ITMO",
    "ITMO",
    "SPbSU",
    "ITMO",
    "ITMO",
    "ITMO",
    "ITMO",
    "ITMO",
    "PetrSU, ITMO",
    "SPbSU",
    "SPbSU",
    "ITMO",
    "ITMO",
    "ITMO",
    "ITMO",
    "SPbSU",
    "ITMO",
    "ITMO",
    "ITMO",
    "ITMO",
    "SPbSU",
    "ITMO"};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int y;
    cin >> y;

    cout << porch[y - 1995];
}