#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

#define MAX 450000
int p[MAX];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    ofstream file("prime.txt");
    for (int i = 2; i <= MAX; i++) {
        p[i] = i;
    }

    for (int i = 2; i <= MAX; i++) {
        if (p[i] == 0) continue;
        for (int j = 2 * i; j <= MAX; j += i) {
            p[j] = 0;
        }
    }

    if (file.is_open()) {
        for (int i = 0; i < 5000; i++) {
            for (int j = 0; j < 80; j++) {
                if (i == 3333 && (8 <= j && j <= 26)) {
                    file << "9099099909999099999";
                    j = 27;
                }
                
                long long here = i * 80 + j + 2;
                if (p[here] == here)
                    file << "0";
                else
                    file << "1";
            }
            file << '\n';
        }
    }
}