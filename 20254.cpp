#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int ur, tr, uo, to;
    cin >> ur >> tr >> uo >> to;

    int site = 56 * ur + 24 * tr + 14 * uo + 6 * to;
    cout << site;
}