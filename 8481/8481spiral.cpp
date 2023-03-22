#include <fstream>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    ifstream in("gen8.txt");
    ofstream out("spiral.txt");

    vector<char> sp;
    sp.push_back(' ');
    char c[1000][1000];
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            in >> c[i][j];
        }
    }

    int i = 717, j = 48;
    while (true) {
        if (c[i - 1][j + 1] == '#' && sp.back() != 'e') {
            sp.push_back('a');
            i--;
            j++;
        } else if (c[i][j + 1] == '#' && sp.back() != 'f') {
            sp.push_back('b');
            j++;
        } else if (c[i + 1][j + 1] == '#' && sp.back() != 'g') {
            sp.push_back('c');
            i++;
            j++;
        } else if (c[i + 1][j] == '#' && sp.back() != 'h') {
            sp.push_back('d');
            i++;
        } else if (c[i + 1][j - 1] == '#' && sp.back() != 'a') {
            sp.push_back('e');
            i++;
            j--;
        } else if (c[i][j - 1] == '#' && sp.back() != 'b') {
            sp.push_back('f');
            j--;
        } else if (c[i - 1][j - 1] == '#' && sp.back() != 'c') {
            sp.push_back('g');
            i--;
            j--;
        } else if (c[i - 1][j] == '#' && sp.back() != 'd') {
            sp.push_back('h');
            i--;
        } else
            break;
    }

    for (int i = 0; i < sp.size(); i++) {
        out << sp[i];
    }
}