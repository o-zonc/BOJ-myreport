#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string board;
    cin >> board;

    board = regex_replace(board, regex("XXXX"), "AAAA");
    board = regex_replace(board, regex("XX"), "BB");

    if (board.find("X") == -1) cout << board;
    else cout << -1;
}