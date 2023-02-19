#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string abc;
    cin >> abc;
    reverse(abc.begin(), abc.end());
    cout << abc;
}