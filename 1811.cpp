#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    while (true) {
        string target, guess;
        cin >> target;

        if (target == "#") break;

        cin >> guess;
        string guess2 = guess;

        int color[3] = {0};

        for (int i = 0; i < target.length(); i++) {
            if (target[i] == guess[i]) {
                color[0]++;
                target[i] = '*';
                guess[i] = '4';
            }
        }

        for (int i = 0; i < target.length(); i++) {
            if (i > 0 && guess[i] == target[i - 1]) {
                color[1]++;
                target[i - 1] = '*';
                guess[i] = '4';
            } else if (i < target.length() - 1 && guess[i] == target[i + 1]) {
                color[1]++;
                target[i + 1] = '*';
                guess[i] = '4';
            }
        }

        for (int i = 0; i < target.length(); i++) {
            for (int j = 0; j < target.length(); j++) {
                if (target[i] == guess[j]) {
                    color[2]++;
                    target[i] = '*';
                    guess[j] = '4';
                }
            }
        }

        cout << guess2 << ": " << color[0] << " black, " << color[1] << " grey, " << color[2] << " white\n";
    }
}